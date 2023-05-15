#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "semantic_analysis.c"

    typedef struct
{    
    char function_name[50]; 
    char command_name[50];
    int operande;  
   
} ENTREE_CODE;

ENTREE_CODE command_tab[1000];

int nbCodes = 0 ;

/******* Implémentation de la table de code machine *******/


// CREATING TABLE OF SYMBOLES
void addCommand(char command_name[], int operande, char function_name[]){
        
        strcpy(command_tab[nbCodes].command_name, command_name);
        command_tab[nbCodes].operande = operande ;
        strcpy(command_tab[nbCodes].function_name, function_name);
        nbCodes++;
}

// PRINTING TABLE OF SYMBOLES

void displayTable()
{
        printf("----------------------------------------|\n");
        printf("|%5s %10s %10s %10s\n", "Nb",  "Op_Code",   "Operand  ",  "Function |");
        printf("|---------------------------------------|\n");
        for (int i = 0; i < nbCodes; i++)
        {
            printf("|%5d %10s %10d %10s |\n", i, command_tab[i].command_name, command_tab[i].operande, command_tab[i].function_name);
        }
        printf("|----------------------------------------|\n\n\n");
}

// Ajout d'opérande :

void addOperator(char operSymbol[])
{
        if (!strcmp(operSymbol, "*"))
        {
            addCommand("MUL", -1, "");
        }
        else if (!strcmp(operSymbol, "+"))
        {
            addCommand("ADD", -1, "");
        }
        else if (!strcmp(operSymbol, "-"))
        {
            addCommand("SUB", -1, "");
        }
        else if (!strcmp(operSymbol, "<"))
        {
            addCommand("INF", -1, "");
        }
        else if (!strcmp(operSymbol, "=="))
        {
            addCommand("EQUAL", -1, "");
        }
        else if (!strcmp(operSymbol, "!="))
        {
            addCommand("DIFF", -1, "");
        }
}