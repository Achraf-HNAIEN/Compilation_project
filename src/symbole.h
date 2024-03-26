#ifndef SYMBOLE_H
#define SYMBOLE_H

typedef enum classe{
    GLOBALE,
    LOCALE,
    PARAMETRE,
    FONCTION
}Classe;

typedef struct symbole
{   
    char* identifant;
    int value;
    long int address;
    int tabSize; // met a 0 si pas un tableau sinon la taille du tableau tab[0]
    Classe classe;
    Symbole* next;
}Symbole;


int intialisSymboleTable();
void addSymbole(char* identifant, int value, long int address, int tabSize, Classe classe);
void estPresent(char* identifant);

#endif // SYMBOLE_H