#include <stdio.h>
#include <math.h>

int main() {
	float seno, x, parcial, fat;
	int cont, exp, n;

	exp = 3;
	printf("Digite o valor de X em graus:");
	scanf("%f", &x);

	x = x * M_PI / 180;
	seno = x;
	cont = 1;
	while (cont <= 15) {
		n = exp;
		fat = n;

		while (n > 1) {
			n--;
			fat = fat * n;			
		}

		parcial = pow(x, exp) / fat;
		
		if (cont % 2 != 0)
			seno -= parcial;
		else
			seno += parcial;

		exp += 2;
		cont += 1;
	}
	printf("Sen(X) = %f", seno);

	return 0;
}
