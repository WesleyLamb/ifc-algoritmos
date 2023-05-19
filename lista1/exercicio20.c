#include <stdio.h>

int main() {
	int n1, n2;
	printf("Informe o primeiro valor: \n");
	scanf("%i", &n1);

	printf("Informe o segundo valor: \n");
	scanf("%i", &n2);

	if (n1 < n2)
		printf("%i, %i\n", n1, n2);
	else
		printf("%i, %i\n", n2, n1);

	return 0;
}
