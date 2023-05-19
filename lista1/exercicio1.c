#include <stdio.h>
#include <math.h>

int main () {
    int r, h;

    printf("Informe a altura do cilindro:\n");
    scanf("%i", &h);

    printf("Informe o raio do cilindro:\n");
    scanf("%i", &r);

    printf("A área superficial do cilindro é: %.2f\n", 2 * M_PI * r * h);

    return 0;
}