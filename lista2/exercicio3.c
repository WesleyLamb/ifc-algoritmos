#include <stdio.h>

int main() {
	int entrada = 1, cont = 0, contNegativos = 0;

	while (entrada != 0 && cont < 20) {
		printf("Informe um nuºmero:\n");
		scanf("%d", &entrada);
		if (entrada < 0) {
			contNegativos++;
		}
		
		cont++;
	}

	printf("%d numeros informados sao negativos\n", contNegativos);
	
	return 0;
}
