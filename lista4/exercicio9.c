#include <stdio.h>
#define VET_SIZE 10

int main() {
    int vetEntrada[VET_SIZE], vetSaida[VET_SIZE], i;

    for (i = 0; i < VET_SIZE; i++) {
        printf("Informe um valor para a posicao %i do vetor: ", i + 1);
        scanf("%i", &vetEntrada[i]);
    }

    for (i = 0; i < VET_SIZE; i++) {
        if (vetEntrada[i] % 2 == 0) 
            vetSaida[i] = vetEntrada[i] / 2;
        else
            vetSaida[i] = vetEntrada[i] * 3;
    }

    printf("vetEntrada = ");
    for (i = 0; i < VET_SIZE; i++) {
        if (i != 0)
            printf(", ");
        printf("%i", vetEntrada[i]);
    }

    printf("\nvetSaida = ");
    for (i = 0; i < VET_SIZE; i++) {
        if (i != 0)
            printf(", ");
        printf("%i", vetSaida[i]);
    }
    printf("\n");

    return 0;
}