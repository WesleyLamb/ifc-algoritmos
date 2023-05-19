#include <stdio.h>
#define VET_SIZE 5

int main() {
    int vetCodAluno[VET_SIZE], i, codMenorNota, codMaiorNota;
    float vetNota1[VET_SIZE], vetNota2[VET_SIZE], vetNota3[VET_SIZE], menorNota = 11, maiorNota = -1, 
            somaMedia = 0;
        
    for (i = 0; i < VET_SIZE; i++) {
        printf("Informe o codigo do aluno %i: ", i + 1);
        scanf("%i", &vetCodAluno[i]);

        printf("Informe a nota 1 do aluno %i: ", i + 1);
        scanf("%f", &vetNota1[i]);

        if (vetNota1[i] < menorNota) {
            codMenorNota = vetCodAluno[i];
            menorNota = vetNota1[i];
        }

        if (vetNota1[i] > maiorNota) {
            codMaiorNota = vetCodAluno[i];
            maiorNota = vetNota1[i];
        }

        printf("Informe a nota 2 do aluno %i: ", i + 1);
        scanf("%f", &vetNota2[i]);

        if (vetNota2[i] < menorNota) {
            codMenorNota = vetCodAluno[i];
            menorNota = vetNota2[i];
        }

        if (vetNota2[i] > maiorNota) {
            codMaiorNota = vetCodAluno[i];
            maiorNota = vetNota2[i];
        }

        printf("Informe a nota 3 do aluno %i: ", i + 1);
        scanf("%f", &vetNota3[i]);

        if (vetNota3[i] < menorNota) {
            codMenorNota = vetCodAluno[i];
            menorNota = vetNota3[i];
        }

        if (vetNota3[i] > maiorNota) {
            codMaiorNota = vetCodAluno[i];
            maiorNota = vetNota3[i];
        }
    }

    printf("A menor nota foi %f do aluno codigo %i\n", menorNota, codMenorNota);
    printf("A maior nota foi %f do aluno codigo %i\n", maiorNota, codMaiorNota);

    return 0;
}