#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 10
#define COL 10

int main() {
	int resultados[LIN], i, j;
	char q[4] = {'a', 'b', 'c', 'd'}, questoes[LIN][COL], gabarito[COL];

	srand(time(NULL));

	for (i = 0; i < LIN; i++)
		resultados[i] = 0;

	for (j = 0; j < COL; j++) {
		gabarito[j] = q[rand() % 4];
	}

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			questoes[i][j] = q[rand() % 4];
		}
	}

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			if (questoes[i][j] == gabarito[j])
				resultados[i]++;
		}
	}

	printf("gabarito: \n");
	for (j = 0; j < COL; j++) {
		printf("%c ", gabarito[j]);
	}
	printf("\nresultados: \n");
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%c ", questoes[i][j]);
		}
		printf("= %i\n", resultados[i]);
	}


	return 0;
}
