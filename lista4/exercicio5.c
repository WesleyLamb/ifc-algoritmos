#include <stdio.h>
#define VET_SIZE 5

int main() {
	float vetAltura[VET_SIZE];
	int vetIdade[VET_SIZE], i;

	for (i = 0; i < VET_SIZE; i++) {
		printf("Informe a idade da pessoa %i: ", i + 1);
		scanf("%i", &vetIdade[i]);

		printf("Informe a altura da pessoa %i: ", i + 1);
		scanf("%f", &vetAltura[i]);
	}

	for (i = VET_SIZE - 1; i >= 0; i--) {
		printf("Pessoa %i: ", i + 1);
		printf("Idade: %i, ", vetIdade[i]);
		printf("Altura: %.2f\n", vetAltura[i]);
	}

	return 0;
}
