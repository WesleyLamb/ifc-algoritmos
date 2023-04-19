#include <stdio.h>

int main() {
	int entrada = 1, contEntradas = 0, somaEntradas = 0;

	while (entrada != 0) {
		printf("Informe um numero:\n");
		scanf("%d", &entrada);

		if (entrada != 0) {
			if (entrada % 2 == 0) {
				contEntradas++;
				somaEntradas += entrada;
			}
		}
	}
	
	printf("Media dos numeros pares informados: %f\n", somaEntradas / (float) contEntradas);

	return 0;
}
