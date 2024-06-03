# tree-sitter-publicodes

[tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for Publicodes.

> [!NOTE]
> For now, it's only used in the Publicodes
> [language-server](https://github.com/publicodes/language-server). In
> particular, it's used to provide semantic highlighting in the editor.
> Therefore, the grammar contains AST nodes that are only relevant for this use
> case (e.g. all the mechanism names).

## Install

```bash
# Using npm
npm install tree-sitter-publicodes

# Using yarn
yarn add tree-sitter-publicodes
```

## Usage

```javascript
const Parser = require("tree-sitter");
const Publicodes = require("tree-sitter-publicodes");

const parser = new Parser();
parser.setLanguage(Publicodes);

const sourceCode = `
prix:
  avec:
    carottes: 2€/kg
    champignons: 5€/kg
    avocat: 2€/avocat

dépenses primeur:
  somme:
    - prix . carottes * 1.5 kg
    - prix . champignons * 500g
    - prix . avocat * 3 avocat
`;

const tree = parser.parse(sourceCode);

console.log(tree.rootNode.toString());
```

## Local development

```bash
# Install dependencies
npm install

# Test the grammar
npm run test

# Parse a Publicodes file
npm run parse path/to/file.publicodes

# Rebuild the grammar (to execute after each change in the grammar if the
# package is used locally)
npm run dev
```
