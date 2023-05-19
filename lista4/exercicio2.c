#include <stdio.h>
#define VET_SIZE 20

int main() {
	int i, vet[VET_SIZE];

	for (i = 0; i < VET_SIZE; i++) {
		printf("Informe um valor para a posicao %i do vetor: ", i);
		scanf("%i", &vet[i]);
	}

	for (i = 0; i < VET_SIZE; i++) {
		if (vet[i] == 10)
			printf("%i\n", i);
	}

	return 0;
}
