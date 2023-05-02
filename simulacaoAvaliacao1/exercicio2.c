#include <stdio.h>
#include <stdlib.h>

int main() {
    int entrada = 0, cont = 0, raizQuadrada = 0, valorMaisProximo;

    do {
        printf("Informe um valor para calcularmos a raiz quadrada aproximada:\n");
        scanf("%d", &entrada);

        if (entrada < 0)
            printf("O valor deve ser um número natural.\n");
    } while(entrada <  0);

    valorMaisProximo = entrada;
    while (!raizQuadrada) {
        cont++;
        if (abs(cont * cont - entrada) < valorMaisProximo)
            valorMaisProximo = abs(cont * cont - entrada);
        else {
            raizQuadrada = 1;
            cont--;
        }
    }

    printf("A raiz quadrada aproximada de %d é: %d", entrada, cont);

    return 0;
}