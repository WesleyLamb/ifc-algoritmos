#include <stdio.h>

int main() {
	int entrada = 0, i = 1;
	float n = 1;

	printf("Informe um numero de entrada:\n");
	scanf("%d", &entrada);

	while (i <= entrada) {
		n = n + (1 / (float) i);
		
		i++;
	}

	printf("N = %f", n);

	return 0;
}
