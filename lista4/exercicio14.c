#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 7
#define COL 4

int main() {
	int mat[LIN][COL], i, j, menorValor = 99999, menorValorI, menorValorJ;
	srand(time(NULL));
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			/*
			printf("Informe um valor para a posicao (%i, %i): ", i, j);
			scanf("%i", &mat[i][j]);
			*/
			mat[i][j] = rand() % 100;
			if (mat[i][j] < menorValor) {
				menorValor = mat[i][j];
				menorValorI = i;
				menorValorJ = j;
			}
		}
	}
	printf("O menor valor (%i) foi encontrado em (%i, %i).\n", menorValor, menorValorI, menorValorJ);

	return 0;
}
