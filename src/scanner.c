#include "tree_sitter/parser.h"
#include "tree_sitter/array.h"

// CAREFUL : This enum should be in the same order as the `externals` array in the grammar.js file
enum TokenType
{
  INDENT,
  DEDENT,
  ARRAY_PREFIX,
  COMMENT,
  NEWLINE,
  PARAGRAPH,
  ERROR_RECOVERY_MODE
};

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }
static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
// Create the array in your create function

void *tree_sitter_publicodes_external_scanner_create(void)
{
  return ts_calloc(1, sizeof(Array(int)));
}

static bool parse_paragraph(void *payload, TSLexer *lexer, const bool *valid_symbols)
{
  Array(int) *indents = payload;
  uint16_t previous_indent_length = *array_back(indents);

  lexer->result_symbol = PARAGRAPH;

  // Skip the newline following the `|` character
  while (lexer->lookahead && lexer->lookahead != '\n')
  {
    if (lexer->lookahead != ' ')
    {
      return false;
    }
    skip(lexer);
  }

  // TODO first line is whitespace or newline ?

  uint16_t paragraph_indent_length = 0;

  // Compute the indent length of the first line
  while (lexer->lookahead && (lexer->lookahead == ' ' || lexer->lookahead == '\n'))
  {
    if (lexer->lookahead == ' ')
    {
      paragraph_indent_length++;
    }
    else if (lexer->lookahead == '\n')
    {
      paragraph_indent_length = 0;
    }
    skip(lexer);
  }

  // In case the first line is not indented, the paragraph is empty
  if (paragraph_indent_length <= previous_indent_length)
  {
    return true;
  }

  while (lexer->lookahead)
  {
    while (lexer->lookahead && lexer->lookahead != '\n')
    {
      advance(lexer);
    }
    advance(lexer);

    uint16_t line_indent_length = 0;
    // Check if the indent length of the following line less than the paragraph indent length
    while (line_indent_length < paragraph_indent_length && lexer->lookahead)
    {
      if (lexer->lookahead == ' ')
      {
        line_indent_length++;
        skip(lexer);
      }
      else
      {
        break;
      }
    }

    if (lexer->lookahead && lexer->lookahead != '\n' && line_indent_length < paragraph_indent_length)
    {
      return true;
    }
  }
  return true;
}

bool tree_sitter_publicodes_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
  bool error_recovery_mode = valid_symbols[ERROR_RECOVERY_MODE];

  if (!valid_symbols[INDENT] && !valid_symbols[DEDENT] && !valid_symbols[NEWLINE] && !valid_symbols[PARAGRAPH] && !valid_symbols[ARRAY_PREFIX])
  {
    return false;
  }

  if (valid_symbols[PARAGRAPH] && !error_recovery_mode)
  {
    return parse_paragraph(payload, lexer, valid_symbols);
  }

  Array(int) *indents = payload;
  uint32_t indent_length = 0;
  bool found_end_of_line = false;

  /*
    An array can have a block following directly the `-` prefix (without a new line).
    The indent level should change in this case.
    Example:
    ```
    - line1
      line2 # This line is expected to be indented, without the need of parsing an `INDENT` token
    ```
  */

  for (;;)
  {
    if (lexer->lookahead == '\n')
    {
      indent_length = 0;
      found_end_of_line = true;
      skip(lexer);
    }
    else if (lexer->lookahead == ' ')
    {
      indent_length++;
      skip(lexer);
    }

    else if (lexer->eof(lexer))
    {
      indent_length = 0;
      found_end_of_line = true;
      break;
    }

    else if (lexer->lookahead == '#')
    {
      if (!found_end_of_line)
      {
        return false;
      }
      while (lexer->lookahead && lexer->lookahead != '\n')
      {
        lexer->advance(lexer, true);
      }
      lexer->result_symbol = COMMENT;
      return true;
    }
    else
    {
      break;
    }
  }

  if (found_end_of_line)
  {
    if (indents->size > 0)
    {
      uint16_t current_indent_length = *array_back(indents);

      if (valid_symbols[INDENT] &&
          indent_length > current_indent_length)
      {
        array_push(indents, indent_length);
        lexer->result_symbol = INDENT;
        return true;
      }
    }
    if (valid_symbols[NEWLINE])
    {

      lexer->result_symbol = NEWLINE;
      return true;
    }
  }

  if (valid_symbols[DEDENT])
  {
    uint16_t indent_length = lexer->get_column(lexer);
    if (indent_length < *array_back(indents))
    {
      array_pop(indents);
      lexer->result_symbol = DEDENT;
      return true;
    }
  }
  if (valid_symbols[ARRAY_PREFIX] && lexer->lookahead == '-')
  {
    skip(lexer);
    while (lexer->lookahead == ' ' || lexer->lookahead == '\n')
    {
      skip(lexer);
    }

    uint16_t indent_length = lexer->get_column(lexer);
    lexer->result_symbol = ARRAY_PREFIX;
    array_push(indents, indent_length);
    return true;
  }
  return false;
}

void tree_sitter_publicodes_external_scanner_deserialize(void *payload, const char *buffer, unsigned length)
{

  Array(int) *indents = payload;
  array_delete(indents);
  array_push(indents, 0);
  for (uint32_t iter = 0; iter < length; ++iter)
  {
    array_push(indents, buffer[iter]);
  }
}

unsigned tree_sitter_publicodes_external_scanner_serialize(void *payload, char *buffer)
{
  Array(int) *indents = payload;
  uint32_t iter = 1;
  size_t size = 0;
  for (; iter < indents->size && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE; ++iter)
  {
    buffer[size++] = (char)*array_get(indents, iter);
  }

  return size;
}

void tree_sitter_publicodes_external_scanner_destroy(void *payload)
{
  Array(int) *indents = payload;
  array_delete(indents);
  ts_free(indents);
}
