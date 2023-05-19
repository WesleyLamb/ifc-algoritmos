#include <stdio.h>
#define N 12

int main() {
	int vetN[N], vetX[N], vetY[N], i, iX = 0, iY = 0;

	for (i = 0; i < N; i++) {
		printf("Informe um valor para a posicao %i do vetor: ", i);
		scanf("%i", &vetN[i]);

		if (vetN[i] % 2 == 0) {
			if (vetN[i] % 3 == 0) {
				vetX[iX] = vetN[i];
				iX++;
			}
		} else {
			if (vetN[i] % 5 == 0) {
				vetY[iY] = vetN[i];
					iY++;
			}
		}
	}

	if (iX > 0) {
		printf("\nvetX = ");
		for (i = 0; i < iX; i++) {
			if (i > 0)
				printf(", ");
			printf("%i", vetX[i]);
		}
	}

	if (iY > 0) {
		printf("\nvetY = ");
		for (i = 0; i < iY; i++) {
			if (i > 0)
				printf(", ");
			printf("%i", vetY[i]);
		}
	}

	printf("\n");
	return 0;
}
