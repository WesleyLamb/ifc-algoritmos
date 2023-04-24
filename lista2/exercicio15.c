#include <stdio.h>

int main() {
    int i = 0, contSup2Metros = 0;
    float entrada, maiorAltura = 0.0, somaAlturas = 0.0;

    while (i < 20) {
        do {
            printf("Informe a altura para a pessoa numero %d:\n", i + 1);
            scanf("%f", &entrada);

            if (entrada <= 0)
                printf("Valor invalido.\n");
        } while (entrada <= 0);

        if (entrada > maiorAltura)
            maiorAltura = entrada;

        if (entrada > 2.0)
            contSup2Metros++;

        somaAlturas += entrada;
        
        i++;
    }
    printf("Resultados da pesquisa:\n");
    printf("%.2f e a maior altura do grupo;\n%.2f e a altura media do grupo;\n%d pessoas sao maiores que 2 metros.\n", maiorAltura, (somaAlturas / 20.0), contSup2Metros);

    return 0;
}