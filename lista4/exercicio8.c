#include <stdio.h>
#define VET_SIZE 10

int main() {
    int vetEntrada[VET_SIZE], vetSaida[VET_SIZE], i;

    for (i = 0; i < VET_SIZE; i++) {
        printf("Informe um valor para a posicao %i do vetor: ", i + 1);
        scanf("%i", &vetEntrada[i]);
    }

    for (i = 0; i < VET_SIZE; i++) {
        vetSaida[VET_SIZE - i - 1] = vetEntrada[i];
    }

    printf("vetSaida = ");
    for (i = 0; i < VET_SIZE; i++) {
        if (i > 0)
            printf(", ");
        printf("%i", vetSaida[i]);
    }

    return 0;
}