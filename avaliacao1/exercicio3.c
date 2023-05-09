#include <stdio.h>

int main() {
	int n1, n2, primo = 0, cont;
	printf("Informe o valor inicial:\n");
	scanf("%i", &n1);

	printf("Informe o valor final:\n");
	scanf("%i", &n2);
	if (n2 < n1) {
		cont = n2;
		n2 = n1;
		n1 = cont;
	}

	while (n1 <= n2) {
		cont = 2;
		primo = 1;
		while (cont < n1 && primo) {
			if (n1 % cont == 0)
				primo = 0;
			cont++;
		}
		
		if (primo)
			printf("%i eh primo.\n", n1);

		n1++;
	}

	return 0;
}
