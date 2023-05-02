#include <stdio.h>

int main() {
    int cont = 0, penultimoValor = 0, ultimoValor = 1, valor = 0;
    printf("1\n");
    while (cont < 19) {
        valor = penultimoValor + ultimoValor;
        printf("%d\n", valor);
        penultimoValor = ultimoValor;
        ultimoValor = valor;
        cont++;
    }

    return 0;
}