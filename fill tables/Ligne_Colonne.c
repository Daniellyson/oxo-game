#include "Header.h"

int ligneFonc(int lgLigne) {
	int lig;
	lig = 0;

	printf("Choisissez une ligne: ");
	scanf_s("%d", &lig);
	viderBuffer();
	
	if (lig < 1 || lig > lgLigne) {
		printf("\nnERREUR Numero entre 1 - %d\n\n", lgLigne);
	}
	return lig;
}

int colonneFonc(int lgColonne) {
	int col;
	col = 0;
	printf("Choisissez une colonne: ");
	scanf_s("%d", &col);
	viderBuffer();
	if (col < 1 || col > lgColonne) {
		printf("\nnERREUR Numero entre 1 - %d\n\n", lgColonne);
	}
	return col;
}

char ligneColonneLettre(void) {
	char oxo;
	do {
		printf("\nTapez 'x' ou 'o' ('f' pour finir): ");
		oxo = getchar();
		if (oxo != 'x' && oxo != 'o' && oxo != 'f') {
			viderBuffer();
		}
	} while (oxo != 'x' && oxo != 'o' && oxo != 'f');
	return oxo;
}
