#ifndef SYMBOL_H
#define SYMBOL_H

#include <stdbool.h>

// Définition des types de symboles
typedef enum { VARIABLE, FUNCTION, PARAMETER } SymbolType;

typedef enum { INT, CHAR } DataType;

// Structure pour un symbole
typedef struct Symbol {
  char* name;         // Nom
  SymbolType type;    // Type de symbole (variable, fonction, paramètre)
  DataType dataType;  // Type de donnée (int, char)
  // bool isGlobal;            // Indique si le symbole est global 0 si oui le
  // reste non
  int address;     // Adresse dans la mémoire
  int scopeLevel;  // Niveau de portée du symbole
  int lineNumber;  // Ligne dans le code source
  struct Symbol* next;
} Symbol;

typedef struct {
  Symbol* head;  // Pointeur vers le premier symbole de la liste
  int size;      // Nombre de symboles dans la table
} SymbolTable;

// Fonctions pour la gestion de la table des symboles
void initSymbolTable(SymbolTable* table);
Symbol* addSymbol(SymbolTable* table,
                  const char* name,
                  SymbolType type,
                  int dataType,
                  // bool isGlobal,
                  int lineNumber);
Symbol* findSymbol(SymbolTable* table, const char* name);
void deleteSymbolTable(SymbolTable* table);
Symbol* checkAndAddSymbol(SymbolTable* table, const char* name, SymbolType type, DataType dataType, int lineNumber);
void fillGlobalSymbolTable(SymbolTable* table, Node* ast);

#endif
