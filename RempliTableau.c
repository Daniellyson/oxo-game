#include "Header.h"

void rempliTableau(char tableauCarre4[][TAB_LG_4], char oxo, int lig, int col) {
	int ligne = 0;
	while (ligne < TAB_LG_4) {
		int colonne = 0;
		while (colonne < TAB_LG_4) {
			if (ligne == lig - 1 && colonne == col - 1) {
				tableauCarre4[lig - 1][col - 1] = oxo;
			}
			else {
				if (tableauCarre4[ligne][colonne] != 'x' && tableauCarre4[ligne][colonne] != 'o') {
					tableauCarre4[ligne][colonne] = ' ';
				}
			}
			colonne++;
		}
		ligne++;
	}
}

void rempliTableau2(char tableauCarre5[][TAB_LG_5], char oxo, int lig, int col) {
	int ligne = 0;
	while (ligne < TAB_LG_5) {
		int colonne = 0;
		while (colonne < TAB_LG_5) {
			if (ligne == lig - 1 && colonne == col - 1) {
				tableauCarre5[lig - 1][col - 1] = oxo;
			}
			else {
				if (tableauCarre5[ligne][colonne] != 'x' && tableauCarre5[ligne][colonne] != 'o') {
					tableauCarre5[ligne][colonne] = ' ';
				}
			}
			colonne++;
		}
		ligne++;
	}
}