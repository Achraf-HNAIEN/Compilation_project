#ifndef SYMBOLE_H
#define SYMBOLE_H

typedef enum Classe { GLOBALE, LOCALE, PARAMETRE, FONCTION };
typedef enum Entry { INT, CHAR };

typedef struct entry {
  Entry entryType;
  char identifiant[1024];
  long int address;
} ENTRY;

typedef struct symbole {
  char* identifiant;
  int value;
  long int address;
  Classe classe;
} Symbole;

int intialisSymboleTable();
void addSymbole(char* identifant,
                int value,
                long int address,
                int tabSize,
                Classe classe);
void estPresent(char* identifant);

void add_function();
void free_function();
void add_var();
void free_var();
void add_param();
void free_param();
void add_tab();
void free_tab();
void add_global();
void free_global();

#endif  // SYMBOLE_H