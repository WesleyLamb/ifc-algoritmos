#include <stdio.h>
#define VET_SIZE 10

int main() {
	int vet[VET_SIZE], i, n = 0;

	for (i = 0; i < VET_SIZE; i++) {
		printf("Informe um valor para a a posicao %i do vetor: ", i + 1);
		scanf("%i", &vet[i]);
		if (vet[i] > 20)
			n++;
	}

	if (n > 0) {
		for (i = 0; i < VET_SIZE; i++) {
			if (vet[i] > 20)
				printf("%i\n", vet[i]);
		}
	} else {
		printf("Nao foi especificado nenhum valor maior que 20.\n");
	}

	return 0;
}
