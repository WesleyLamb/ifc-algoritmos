#include <stdio.h>

int main() {
	int n1, n2, maiorValor;
	printf("Informe um valor: \n");
	scanf("%i", &n1);

	printf("Informe um segundo valor: \n");
	scanf("%i", &n2);

	if (n1 > n2)
		maiorValor = n1;
	else
		maiorValor = n2;

	printf("O maior valor e: %i\n", maiorValor);

	return 0;
}
