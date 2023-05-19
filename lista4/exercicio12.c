#include <stdio.h>
#define N 10

int main() {
	int vet1[N], vet2[N], i, contIguais = 0;
	
	for (i = 0; i < N; i++) {
		printf("Informe um valor para a posicao %i do primeiro vetor: ", i + 1);
		scanf("%i", &vet1[i]);
	}

	for (i = 0; i < N; i++) {
		printf("Informe um valor para a posicao %i do segundo vetor: ", i + 1);
		scanf("%i", &vet2[i]);
	}

	for (i = 0; i < N; i++) {
		contIguais += vet1[i] == vet2[i];
	}

	if (contIguais == N)
		printf("Os vetores sao iguais\n");
	else
		printf("Os vetores sao diferentes\n");

	return 0;
}
