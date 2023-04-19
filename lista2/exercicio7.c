#include <stdio.h>

int main() {
	int n, a1, r, i = 0;

	printf("Informe o numero de termos para a progressao aritmetica:\n");
	scanf("%d", &n);

	if (n < 1 ) {
		printf("O numero deve ser superior a zero.");
		return 0;
	}
	
	printf("Informe o primeiro termo da progressao:\n");
	scanf("%d", &a1);

	printf("Informe a razao da progressao:\n");
	scanf("%d", &r);

	while (i < n) {
		printf("%d ", (a1 + (r * i)));

		i++;
	}

	return 0;
}
