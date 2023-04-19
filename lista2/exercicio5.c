#include <stdio.h>

int main() {
	int entrada = 0, i = 1, j = 0;
	float n = 1, fatorial = 0;

	printf("Informe um valor de entrada:\n");
	scanf("%d", &entrada);

	while (i <= entrada) {
		j = i - 1;
		fatorial = i;
		while (j > 0) {
			fatorial = fatorial * j;
			j--;
		}

		n = n + (1 / (float) fatorial);
		i++;
	}

	printf("N = %f", n);
	return 0;
}
