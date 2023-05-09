#include <stdio.h>
#include <math.h>

int main() {
	int x1, y1, x2, y2;
	do {
		printf("Informe um valor para X1:\n");
		scanf("%i", &x1);
		if (x1 < 0)
			printf("O valor deve ser positivo.\n");
	} while (x1 < 0);

	do {
		printf("Informe um valor para Y1:\n");
		scanf("%i", &y1);
		if (y1 < 0)
			printf("O valor deve ser positivo.\n");
	} while (y1 < 0);


	do {
		printf("Informe um valor para X2:\n");
		scanf("%i", &x2);
		if (x2 < 0 || x2 < x1)
			printf("O valor deve ser positivo e maior que X1.\n");
	} while (x1 < 0 || x2 < x1);

	do {
		printf("Informe um valor para Y2:\n");
		scanf("%i", &y2);
		if (y2 < 0 || y2 < y1)
			printf("O valor deve ser positivo e maior que Y1.\n");
	} while (y2 < 0 || y2 < y1);

	printf("A distancia D entre as coordenadas 1 e 2 eh: %.2f\n", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

	return 0;
}
