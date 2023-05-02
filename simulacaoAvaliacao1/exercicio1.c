#include <stdio.h>

int main() {
    int entrada, i = 0, menorValor = 99999, maiorValor = -99999;

    while (i < 20) {
        printf("Informe o %d valor:\n", i + 1);
        scanf("%d", &entrada);

        if (entrada > maiorValor)
            maiorValor = entrada;

        if (entrada < menorValor)
            menorValor = entrada;

        i++;
    }

    printf("Resultados:\n");
    printf("Menor valor: %d;\nMaior valor: %d\n", menorValor, maiorValor);

    return 0;
}