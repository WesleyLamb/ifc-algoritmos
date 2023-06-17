#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 5
#define COL 5

int main() {
	int mat[LIN][COL], i, j, somaLinha4 = 0, somaColuna2 = 0, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0, somaTotal = 0;

	srand(time(NULL));
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			//printf("Informe um valor para a posicao %i, %i da matriz: ", i + 1, j + 1);
			//scanf("%i", &mat[i][j]);
			
			mat[i][j] = rand() % 100;
		}
	}
	for (j = 0; j < COL; j++) {
		somaLinha4 += mat[4][j];
	}

	for (i = 0; i < LIN; i++) {
		somaColuna2 += mat[i][2];
	}

	for (i = 0; i < LIN; i++) {
		printf("%i\n", mat[i][i]);
		somaDiagonalPrincipal += mat[i][i];
	}

	for (i = 0; i < LIN; i++) {
		somaDiagonalSecundaria += mat[i][COL - i - 1];
	}

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			somaTotal += mat[i][j];
		}
	}
	
	printf("Matriz: \n");
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%i\t", mat[i][j]);
		}
		printf("\n");
	}

	printf("Soma da linha 4: %i;\nSoma da coluna 2: %i;\nSoma da diagonal principal: %i;\nSoma da diagonal secundaria: %i.", somaLinha4, somaColuna2, somaDiagonalPrincipal, somaDiagonalSecundaria);
	
	return 0;
}
