#include "Header.h"

char tableau4(void) {
	char tableauCarre4[TAB_LG_4][TAB_LG_4];
	int lig;
	int col;
	char oxo;
	char testGagnant;

	printf("   OXO\n");
	printf("1| | | | |\n"
		"2| | | | |\n"
		"3| | | | |\n"
		"4| | | | |\n"
		"  1 2 3 4\n\n");

	do {
		lig = ligneFonc(TAB_LG_4);

	} while (lig < 1 || lig > 4);
	do {
		col = colonneFonc(TAB_LG_4);
	} while (col < 1 || col > 4);

	printf("\n");

	oxo = ligneColonneLettre(); 

	do {
		if (oxo != 'f') {

			rempliTableau(tableauCarre4, oxo, lig, col);

			afficherTableau(tableauCarre4);
		}

		testGagnant = verifierGagnant4(tableauCarre4);
		if (testGagnant == 'g') {
			oxo = 'f';
		}		

		int count = 0;
		for (int iRech = 0; iRech < TAB_LG_4; iRech++) {
			for (int jRech = 0; jRech < TAB_LG_4; jRech++) {

				if (tableauCarre4[iRech][jRech] != ' ') {
					count++;
				}
			}
		}
		if (count == sizeof(tableauCarre4)) {
			oxo = 'f';
		}

		if (oxo != 'f') {
			do {
				lig = ligneFonc(TAB_LG_4);
			} while (lig < 1 || lig > 4);
			do {
				col = colonneFonc(TAB_LG_4);
			} while (col < 1 || col > 4);
			printf("\n");

			do {
				if (tableauCarre4[lig - 1][col - 1] == ' ') {

					oxo = ligneColonneLettre();
				}
				else {
					printf("\nnERREUR Espace deja rempli\n\n");

					do {
						lig = ligneFonc(TAB_LG_4);
						
					} while (lig < 1 || lig > 4);
					do {
						col = colonneFonc(TAB_LG_4);
					} while (col < 1 || col > 4);
					oxo = '0';
				}
			} while (tableauCarre4[lig - 1][col - 1] == 'x' || tableauCarre4[lig - 1][col - 1] == 'o');
			if (oxo == '0') {
				oxo = ligneColonneLettre();
			}
		}
	} while (oxo != 'f');
	return testGagnant;
}