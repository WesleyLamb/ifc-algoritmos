#include <stdio.h>
#define VET_SIZE 10

int main() {
    int vet[VET_SIZE], i, entrada, encontrado = 0;

    for (i = 0; i < VET_SIZE; i++) {
        printf("Informe um valor para a posicao %i do vetor: ", i + 1);
        scanf("%i", &vet[i]);
    }

    printf("Informe um valor para ser buscado: ");
    scanf("%i", &entrada);

    i = 0;
    while (i < VET_SIZE && !encontrado) {
        encontrado = vet[i] == entrada;
        if (!encontrado)
            i++;
    }

    if (encontrado)
        printf("Encontrei o valor na posicao %i\n", i + 1);
    else
        printf("Nao encontrei o valor\n");


    return 0;
}