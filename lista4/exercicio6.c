#include <stdio.h>
#define G 20
#define N 10

int main() {
	int vet[G], vetX[N], vetY[N], i, iG = 0;

	for (i = 0; i < N; i++) {
		printf("Informe um valor para a posicao %i do vetX: ", i + 1);
		scanf("%i", &vetX[i]);

		printf("Informe um valor para a posicao %i do vetY: ", i + 1);
		scanf("%i", &vetY[i]);
	}

	for (i = 0; i < N; i++) {
		vet[iG] = vetX[i];
		iG++;
		vet[iG] = vetY[i];
		iG++;
	}
	printf("vet = ");
	for (i = 0; i < G; i++) {
		if (i > 0)
			printf(", ");
		printf("%i", vet[i]);
	}

	return 0;
}
