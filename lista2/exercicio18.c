#include <stdio.h>

int main() {
    int entradaIdade = 1, entradaSexo, entradaExperiencia, 
        somaIdades = 0, contM = 0, contF = 0, contHomensComExp, 
        somaIdadeHomensComExp = 0, contHomensMais45 = 0, 
        contMulheresComExpEInf35Anos, menorIdadeMulheresComExp = 999;

    while (entradaIdade > 0) {
        do {
            printf("Informe a idade:\n");
            scanf("%d", &entradaIdade);

            if (entradaIdade < 0)
                printf("Idade invalida. Informe 0 para encerrar a pesquisa. \n");
        } while (entradaIdade < 0);

        if (entradaIdade > 0) {
            do {
                printf("Informe o sexo (Masc = 1, Fem = 2):\n");
                scanf("%d", &entradaSexo);

                if (entradaSexo != 1 && entradaSexo != 2)
                    printf("Sexo invalido.\n");
            } while (entradaSexo != 1 && entradaSexo != 2);

            do {

                printf("Informe se possui experiencia (Sim = 1, Nao = 2):\n");
                scanf("%d", &entradaExperiencia);

                if (entradaExperiencia != 1 && entradaExperiencia != 2)
                    printf("Experiencia invalida.\n");
            } while (entradaExperiencia != 1 && entradaExperiencia != 2);

            if (entradaSexo == 1)
                contM++;
            else
                contF++;

            if (entradaSexo == 1 ) {
                if (entradaExperiencia == 1) {
                    contHomensComExp++;
                    somaIdadeHomensComExp += entradaIdade;
                }

                if (entradaIdade > 45)
                    contHomensMais45++;
            } else {
                if (entradaExperiencia == 1) {
                    if (entradaIdade < 35)
                        contMulheresComExpEInf35Anos++;

                    if (entradaIdade < menorIdadeMulheresComExp)
                        menorIdadeMulheresComExp = entradaIdade;
                }
            }
        }
    }

    printf("Resultados da pesquisa:\n");
    printf("Candidatos do sexo feminino: %d\nCandidados do sexo masculino: %d\nIdade media dos homens com experiencia: %.2f\nPercentual de homens com mais de 45 anos: %.2f\nNumero de mulheres com idade inferior a 35 anos e com experiencia: %d\nIdade da mulher mais jovem com experiencia: %d", contF, contM, somaIdadeHomensComExp / (float) contHomensComExp, (contHomensMais45 / (float) contM) * 100, contMulheresComExpEInf35Anos, menorIdadeMulheresComExp);

    return 0;
}