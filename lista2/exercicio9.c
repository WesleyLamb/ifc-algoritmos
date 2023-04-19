#include <stdio.h>

int main() {
	int eFilhos, contFilhos = 0, contFamilias = 0;
	float eSalario = 1.0, somaSalarios = 0, contSalAte100 = 0, maiorSalario = 0;

	while (eSalario >= 0) {
		printf("Informe um salario:\n");
		scanf("%f", &eSalario);

		if (eSalario >= 0) {
			printf("Informe o numero de filhos:\n");
			scanf("%d", &eFilhos);

			if (eSalario > maiorSalario)
				maiorSalario = eSalario;

			if (eSalario <= 100.0)
				contSalAte100++;

			somaSalarios += eSalario;
			contFilhos += eFilhos;
			contFamilias++;
		}
	}

	printf("Resultados da pesquisa:\n");
	printf("Media salarial: R$ %.2f;\nMedia de filhos por familia: %.2f;\nMaior salario: R$ %.2f;\nPercentual de familias com salario ate R$ 100,00: %.2f", (somaSalarios / contFamilias), (contFilhos / (float) contFamilias), maiorSalario, (contSalAte100 / contFamilias) * 100);

}
