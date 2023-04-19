#include <stdio.h>

int main() {
	int cont = 0;
	printf("The multiples of 10 from 0 to 1000 are:\n");
	while (cont <= 1000) {
		if (cont % 10 == 0) {
			printf("%d is multiple of 10\n", cont);
		}

		cont++;
	}

	return 0;
}
