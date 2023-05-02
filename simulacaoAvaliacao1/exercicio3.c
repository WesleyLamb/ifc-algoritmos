#include <stdio.h>

int main() {
    int entrada = 0, cont = 0, soma = 0, contPares = 0, somaPares = 0, maiorPar = 0, menorImpar = 99999;

    while (entrada >= 0) {
        printf("Informe um valor:\n");
        scanf("%d", &entrada);

        if (entrada >= 0) {
            if (entrada % 2 == 0) {
                somaPares += entrada;
                contPares++;

                if (entrada > maiorPar)
                    maiorPar = entrada;
            } else {
                if (entrada < menorImpar)
                    menorImpar = entrada;
            }
            soma += entrada;
            cont++;
        }
    }

    if (cont > 0) {
        printf("Resultados:\n");
        printf("Média dos valores pares positivos: %.2f\nMaior número par positivo: %d\nMenor número ímpar positivo: %d\nMédia geral: %.2f", somaPares / (float)contPares, maiorPar, menorImpar, soma / (float)cont);
    } else {
        printf("Não foi digitado nenhum valor válido.\n");
    }

    return 0;
}