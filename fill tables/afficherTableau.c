#include "Header.h"

void afficherTableau(char tableauCarre4[][TAB_LG_4]) {
	system("cls");
	printf("   OXO\n");
	for (int i = 0; i < TAB_LG_4; i++) {
		printf("%d", i + 1);
		for (int j = 0; j < TAB_LG_4; j++) {
			printf("|%c", tableauCarre4[i][j]);
		}
		printf("|\n");
	}
	printf("  1 2 3 4\n\n");
}

void afficherTableau2(char tableauCarre5[][TAB_LG_5]) {
	system("cls");
	printf("   OXO\n");
	for (int i = 0; i < TAB_LG_5; i++) {
		printf("%d", i + 1);
		for (int j = 0; j < TAB_LG_5; j++) {
			printf("|%c", tableauCarre5[i][j]);
		}
		printf("|\n");
	}
	printf("  1 2 3 4 5\n\n");
}