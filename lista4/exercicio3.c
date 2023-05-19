#include <stdio.h>
#define N 12

int main() {
	int vet[N], i, soma = 0;
	for (i = 0; i < N; i++) {
		printf("Informe um valor para a posicao %i do vetor: ", i);
		scanf("%i", &vet[i]);
		if (i % 2 == 0)
			soma += vet[i];
	}
	for (i = 0; i < N; i++) {
		if (i > 0)
			printf(", ");
		printf("%i", vet[i]);
	}
	printf("\nSoma das posicoes pares do vetor: %i\n", soma);

	return 0;
}
