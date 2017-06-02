#pragma once
#include <stdio.h>
#include <stdlib.h>

#define TAB_LG_4 4
#define TAB_LG_5 5
#define LG_FIN 4

void viderBuffer(void);
char tableau4(void);
char tableau5(void);
char verifierGagnant(char tabGagnant[]);
int ligneFonc(int lgLigne);
int colonneFonc(int lgColonne);

void rempliTableau(char tableauCarre4[], char oxo, int lig, int col);
void rempliTableau2(char tableauCarre5[], char oxo, int lig, int col);

void afficherTableau(char tableauCarre4[]);
void afficherTableau2(char tableauCarre5[]);
char ligneColonneLettre(void);