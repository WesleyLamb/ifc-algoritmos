#include <stdio.h>
#include <math.h>

int main() {
    int l, b, h;

    printf("Informe a largura do cubo:\n");
    scanf("%i", &l);

    printf("Informe o comprimento do cubo:\n");
    scanf("%i", &b);

    printf("Informe a altura do cubo:\n");
    scanf("%i", &h);

    printf("A área do cubo é: %.2f", pow((h * l) + (h * b) + (l * b), 2));

    return 0;
}