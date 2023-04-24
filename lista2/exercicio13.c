#include <stdio.h>

int main() {
    int a, i = 0, contPositivos = 0, contNegativos = 0, contPares = 0, contImpares = 0;

    while (i < 5) {
        printf("Informe o %do valor para a:\n", i + 1);
        scanf("%d", &a);

        if (a > 0)
            contPositivos++;
        else if (a < 0)
            contNegativos++;

        if (a % 2 == 0)
            contPares++;
        else
            contImpares++;

        i++;
    }

    printf("Resultado das entradas:\n");
    printf("%d numeros positivos;\n%d numeros negativos;\n%d numeros pares;\n%d numeros impares.\n", contPositivos, contNegativos, contPares, contImpares);

    return 0;
}