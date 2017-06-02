#include "Header.h"

void main(void) {
	int taille;
	char finir[LG_FIN];
	char testGagnant;
	do {
		do {
			taille = 0;
			printf("Taille du tableau carre 4 - 5 \n\n");
			printf("Choix: ");
			scanf_s("%d", &taille);
			viderBuffer();
			system("cls");
		} while (taille != 4 && taille != 5);

		switch (taille) {
		case TAB_LG_4:
			testGagnant = tableau4();
			break;
		case TAB_LG_5:
			testGagnant = tableau5();
			break;
		}
		
		if (testGagnant == 'g') {
			printf("Vous avez gagne\n\n");
		}
		do {
			printf("Nouvelle partie (oui - non)? ");
			scanf_s("%s", finir, LG_FIN);
		
		} while (strcmp(finir, "oui") != 0 && strcmp(finir, "non") != 0);
		printf("\n");
		system("cls");
	} while (strcmp(finir, "non") != 0);

	system("pause");
}