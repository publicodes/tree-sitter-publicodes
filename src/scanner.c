#include "tree_sitter/parser.h"
#include "tree_sitter/array.h"

enum TokenType
{
  INDENT,
  DEDENT,
  NEWLINE,
  ERROR_RECOVERY_MODE
};

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// Create the array in your create function

void *tree_sitter_publicodes_external_scanner_create(void)
{
  return ts_calloc(1, sizeof(Array(int)));
}

bool tree_sitter_publicodes_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
  bool error_recovery_mode = valid_symbols[ERROR_RECOVERY_MODE];

  Array(int) *indents = payload;
  uint32_t indent_length = 0;
  bool found_end_of_line = false;

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
    else if (lexer->lookahead == '\r' || lexer->lookahead == '\f')
    {
      indent_length = 0;
      skip(lexer);
    }
    else if (lexer->lookahead == '\t')
    {
      indent_length += 8;
      skip(lexer);
    }
    else if (lexer->eof(lexer))
    {
      indent_length = 0;
      found_end_of_line = true;
      break;
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

      if (valid_symbols[DEDENT])
      {
        array_pop(indents);
        lexer->result_symbol = DEDENT;
        return true;
      }
    }

    lexer->result_symbol = NEWLINE;
    return true;
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