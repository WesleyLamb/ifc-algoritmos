#include <stdio.h>

int main() {
	int n1, n2, n3, maiorValor;
	printf("Informe o primeiro valor:\n");
	scanf("%i", &n1);

	printf("Informe o segundo valor:\n");
	scanf("%i", &n2);

	printf("Informe o terceiro valor:\n");
	scanf("%i", &n3);

	if (n1 > n2)
		maiorValor = n1;
	else 
		maiorValor = n2;

	if (n3 > maiorValor)
		maiorValor = n3;

	printf("O maior valor e: %i\n", maiorValor);

	return 0;
}
