#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbole.h"
#include "tree.h"

extern int lineno, colno;
extern int yylex();
void yyerror(const char* msg);
extern int yyparse(void);
extern Node* tree;  

int displayTree = 0;

void printHelp() {
  printf("Usage: tpcas [OPTIONS] FILE.tpc\n");
  printf("Options:\n");
  printf("  -t, --tree\tDisplay the abstract syntax tree.\n");
  printf("  -rep, --rapport\tOpen the report PDF.\n");
  printf("  -h, --help\tDisplay this help message.\n");
}

void translateToAssembly(Node* node, FILE* outputFile, SymbolTable* symTable);

int main(int argc, char* argv[]) {
  SymbolTable symTable;
  initSymbolTable(&symTable);
  FILE* asmFile = fopen("_anonymous.asm", "w");
  if (!asmFile) {
    perror("Failed to open assembly output file");
    return EXIT_FAILURE;
  }

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
      printHelp();
      return 0;
    } else if (strcmp(argv[i], "-t") == 0) {
      displayTree = 1;
    } else if (strcmp(argv[i], "-rep") == 0) {
      system("xdg-open rep/rapport.pdf");
      return 0;
    }
  }

  int parseResult = yyparse();
  if (parseResult == 0) {
    if (displayTree) {
      printTree(tree);
    }
    translateToAssembly(tree, asmFile, &symTable);
    deleteTree(tree);
  }

  fclose(asmFile);
  deleteSymbolTable(&symTable);
  return parseResult;
}

// void translateToAssembly(Node* node, FILE* outputFile, SymbolTable* symTable) {
//   // Implementation to traverse the AST and generate NASM code
//   // This function should recursively generate assembly for each node
//   // Example of handling a simple subtraction node
//   if (node == NULL)
//     return;

//   switch (node->label) {
//     case addsub_op:
//       if (node->byte == '-') {  // Simple subtraction
//         fprintf(outputFile, "sub eax, ebx ; Subtract ebx from eax\n");
//       }
//       break;
//       // Handle other node types and generate corresponding NASM code
//   }

//   translateToAssembly(node->firstChild, outputFile, symTable);
//   translateToAssembly(node->nextSibling, outputFile, symTable);
// }

// void yyerror(const char* msg) {
//   fprintf(stderr, "Error: line %d:%d %s\n", lineno, colno, msg);
// }
