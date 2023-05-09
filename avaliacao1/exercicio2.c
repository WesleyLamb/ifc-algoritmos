#include <stdio.h>
#include <math.h>

int main() {
	float media_par, media_impar;;
	int cont_par, cont_impar, valor, maior_par, menor_impar;
	
	media_par = media_impar = maior_par = 0;
	menor_impar = 99999999;
	
	cont_par = cont_impar = valor = 0;

	while (valor >= 0) {
		printf("Digite um valor:\n");
		scanf("%i", &valor);

		if (valor > 0) {
			if (valor % 2 == 0) {
				media_par += valor;

				if (valor > maior_par) {
					maior_par = valor;
				}

				cont_par++;
			} else {
				media_impar += valor;

				if (valor < menor_impar)
					menor_impar = valor;

				cont_impar++;
			}
		} else if (valor != 0) {
			printf("Bye, bye!\n");
		}
	}
	if (cont_par > 0)
		media_par = media_par / cont_par;
	if (cont_impar > 0)
		media_impar = media_impar / cont_impar;

	printf("Media par: %.2f\n", media_par);
	printf("Media impar: %.2f\n", media_impar);
	printf("Maior par: %i\n", maior_par);
	printf("Menor impar: %i\n", menor_impar);

	return 0;
}
