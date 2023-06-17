#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10

int main() {
	int mat[TAM][TAM], i, j;
	srand(time(NULL));

	for (i = 0; i < TAM - 1, i++) {
		for (j = i + 1; j < TAM; j++) {
			if (i == j)
				mat[i][j] = 0;
			else
				mat[i][j] = mat[j][i] = rand() % 100;
		}
	}



	return 0;
}
