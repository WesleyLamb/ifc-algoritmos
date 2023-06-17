#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COL 5
#define LIN 5


int main() {
	int mat[LIN][COL], contPar = 0, somaPar = 0, i, j;
	srand(time(NULL));
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			/*
			printf("Digite um valor para a posicao (%i, %i): ", i, j);
			scanf("%i", &mat[i][j]);
			*/
			mat[i][j] = rand() % 100;

			if (mat[i][j] % 2 == 0) {
				somaPar += mat[i][j];
				contPar++;
			}

		}
	}
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%i\t", mat[i][j]);
		}
		printf("\n");
	}
	printf("Media dos valores par: %.2f", somaPar / (float) contPar);

	return 0;
}
