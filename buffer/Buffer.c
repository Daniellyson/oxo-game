#include "Header.h"

void viderBuffer(void) {
	char c;
	do {
		c = getchar();
	} while (c != EOF && c != '\n');
}