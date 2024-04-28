#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbole.h"
#include "tree.h"

extern int yyparse(void);
extern void yyerror(const char* msg);
extern Node* tree;  // Assuming the AST root is globally accessible

int displayTree = 0;  // Global variable to control tree display

void printHelp() {
  printf("Usage: tpcas [OPTIONS] FILE.tpc\n");
  printf("Options:\n");
  printf("  -t, --tree\tDisplay the abstract syntax tree.\n");
  printf("  -rep, --rapport\tOpen the report.\n");
  printf("  -h, --help\tDisplay this help message.\n");
}

void openReportPDF() {
  if (system("xdg-open rep/rapport.pdf") != 0 &&
      system("open rep/rapport.pdf") != 0 &&
      system("start rep/rapport.pdf") != 0) {
    fprintf(stderr, "Error: Unable to open the report.\n");
  }
}

int main(int argc, char* argv[]) {
  SymbolTable symTable;
  initSymbolTable(&symTable);

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
      printHelp();
      return 0;
    } else if (strcmp(argv[i], "-t") == 0) {
      displayTree = 1;
    } else if (strcmp(argv[i], "-rep") == 0) {
      openReportPDF();
      return 0;
    }
  }

  int parseResult = yyparse();
  if (parseResult == 0) {
    if (displayTree && tree) {
      printTree(tree);
    }
    deleteTree(tree);
  }
  deleteSymbolTable(&symTable);
  return parseResult;
}
