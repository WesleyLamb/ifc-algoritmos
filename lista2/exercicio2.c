#include <stdio.h>

int main() {
	int cont = 0, numero, max;

	printf("Informe um nú�mero para ser calculado a sua tabua:\n");
	scanf("%d", &numero);

	printf("Informe um valor má�ximo para a tabuada:\n");
	scanf("%d", &max);

	while(cont <= max) {
		printf("%d x %d = %d\n", numero, cont, (numero * cont));

		cont++;
	}

	return 0;
}
