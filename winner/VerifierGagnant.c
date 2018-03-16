#include "Header.h"

char verifierGagnant4(char tabGagnant[][TAB_LG_4]) {

	char fin;
	char continuer = 'c';

	for (int lig = 0; lig < TAB_LG_4; lig++) {
		for (int col = 0; col < TAB_LG_4; col++) {
			if (col <= 1) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig][col + 1] == 'x' && tabGagnant[lig][col + 2] == 'o') {
					fin = 'g';
					return fin;
				}
			}
			
			if (lig <= 1) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig + 1][col] == 'x' && tabGagnant[lig + 2][col] == 'o') {
					fin = 'g';
					return fin;
				}
			}
			
			if (lig <= 1 && col <= 1) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig + 1][col + 1] == 'x' && tabGagnant[lig + 2][col + 2] == 'o') {
					fin = 'g';
					return fin;
				}
			}
			
			if (lig <= 1 && col >= 2) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig + 1][col - 1] == 'x' && tabGagnant[lig + 2][col - 2] == 'o') {
					fin = 'g';
					return fin;
				}
			}
		}
	}
	return continuer;
}

char verifierGagnant5(char tabGagnant[][TAB_LG_5]) {

	char fin;
	char continuer = 'c';

	for (int lig = 0; lig < TAB_LG_5; lig++) {
		for (int col = 0; col < TAB_LG_5; col++) {
			if (col <= 2) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig][col + 1] == 'x' && tabGagnant[lig][col + 2] == 'o') {
					fin = 'g';
					return fin;
				}
			}
			if (lig <= 2) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig + 1][col] == 'x' && tabGagnant[lig + 2][col] == 'o') {
					fin = 'g';
					return fin;
				}
			}
			if (lig <= 2 && col <= 2) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig + 1][col + 1] == 'x' && tabGagnant[lig + 2][col + 2] == 'o') {
					fin = 'g';
					return fin;
				}
			}
			if (lig <= 2 && col >= 2) {
				if (tabGagnant[lig][col] == 'o' && tabGagnant[lig + 1][col - 1] == 'x' && tabGagnant[lig + 2][col - 2] == 'o') {
					fin = 'g';
					return fin;
				}
			}
		}
	}
	return continuer;
}