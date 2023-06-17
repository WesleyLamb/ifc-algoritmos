#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIN 3
#define COL 4

int main() {
	float mat[LIN][COL];
	int i, j;

	srand(time(NULL));

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			//printf("Informe um valor para a posicao %i, %i: ", i + 1, j + 1);
			//scanf("%f", &mat[i][j]);

			mat[i][j] = (rand() % 300) * 0.33;
		}
	}

	printf("matriz: \n");
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j ++) {
			printf("%.2f\t", mat[i][j]);
		}
		printf("\n");
	}

	printf("Canto superior direito: %.2f\n", mat[0][COL - 1]);
	printf("Canto inferior esquerdo: %.2f\n", mat[LIN - 1][0]);

	return 0;
}
