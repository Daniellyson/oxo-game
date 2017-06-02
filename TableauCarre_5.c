#include "Header.h"


char tableau5(void) {
	char tableauCarre5[TAB_LG_5][TAB_LG_5];
	int lig;
	int col;
	char oxo;
	char testGagnant;

	printf("   OXO\n");
	printf("1| | | | | |\n"
		"2| | | | | |\n"
		"3| | | | | |\n"
		"4| | | | | |\n"
		"5| | | | | |\n"
		"  1 2 3 4 5\n\n");

	do {
		lig = ligneFonc(TAB_LG_5);

	} while (lig < 1 || lig > 5);
	do {
		col = colonneFonc(TAB_LG_5);
	} while (col < 1 || col > 5);

	printf("\n");

	oxo = ligneColonneLettre(); 

	do {
		if (oxo != 'f') {

			rempliTableau2(tableauCarre5, oxo, lig, col);

			afficherTableau2(tableauCarre5);
		}

		testGagnant = verifierGagnant5(tableauCarre5);
		if (testGagnant == 'g') {
			oxo = 'f';
		}		

		int count = 0;
		for (int iRech = 0; iRech < TAB_LG_5; iRech++) {
			for (int jRech = 0; jRech < TAB_LG_5; jRech++) {

				if (tableauCarre5[iRech][jRech] != ' ') {
					count++;
				}
			}
		}
		if (count == sizeof(tableauCarre5)) {
			oxo = 'f';
		}

		if (oxo != 'f') {
			do {
				lig = ligneFonc(TAB_LG_5);
			} while (lig < 1 || lig > 5);
			do {
				col = colonneFonc(TAB_LG_5);
			} while (col < 1 || col > 5);
			printf("\n");

			do {
				if (tableauCarre5[lig - 1][col - 1] == ' ') {

					oxo = ligneColonneLettre();
				}
				else {
					printf("\nERREUR Espace deja rempli\n\n");

					do {
						lig = ligneFonc(TAB_LG_5);
						
					} while (lig < 1 || lig > 5);
					do {
						col = colonneFonc(TAB_LG_5);
					} while (col < 1 || col > 5);
					oxo = '0';
				}
			} while (tableauCarre5[lig - 1][col - 1] == 'x' || tableauCarre5[lig - 1][col - 1] == 'o');
			if (oxo == '0') {
				oxo = ligneColonneLettre();
			}
		}
	} while (oxo != 'f');
	return testGagnant;
}