#include <stdio.h>
#define LIN 7
#define COL 8

int main() {
	int mat[LIN][COL], i, j;

	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			mat[i][j] = i + j;
		}
	}

	printf("Matriz: \n");
	for (i = 0; i < LIN; i++) {
		for (j = 0; j < COL; j++) {
			printf("%i\t", mat[i][j]);
		}
		printf("\n");
	}

}
