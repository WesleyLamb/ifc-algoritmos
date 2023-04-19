#include <stdio.h>

int main() {
	float alturaJoao = 1.5, alturaZe = 1.1, passoJoao = 0.02, passoZe = 0.03;
	int anos = 0;

	while (alturaZe < alturaJoao) {
		alturaJoao += passoJoao;
		alturaZe += passoZe;
		anos++;
	}

	printf("Leva %d anos para Ze ficar maior que Joao\n", anos);
	return 0;
}
