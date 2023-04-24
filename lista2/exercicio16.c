#include <stdio.h>

int main() {
    int anos = 0;
    float popPaisA = 90000000, popPaisB = 140000000, crescimentoA = 0.035, crescimentoB = 0.01;

    while (popPaisA < popPaisB) {
        popPaisA += popPaisA * crescimentoA;
        popPaisB += popPaisB * crescimentoB;

        anos++;
    }

    printf("Leva %d anos para o pais A ultrapassar a populacao do pais B.\n", anos);
    return 0;
}