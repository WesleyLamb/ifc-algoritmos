#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define LIN 5
#define COL 5

int main() {
	int mat1[LIN][COL], mat2[LIN][COL], i, j;
	srand(time(NULL));

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			//printf("Informe um valor para a posicao %i, %i: ", i + 1, j + 1);
			//scanf("%i", &mat1[i][j]);

			mat1[i][j] = rand() % 100;
		}
	}

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			mat2[i][j] = pow(mat1[i][j], 3);
		}
	}

	printf("mat1: \n");
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%i\t", mat1[i][j]);
		}
		printf("\n");
	}

	printf("mat2: \n");
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%i\t", mat2[i][j]);
		}
		printf("\n");
	}

	return 0;
}
