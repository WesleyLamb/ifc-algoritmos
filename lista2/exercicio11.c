#include <stdio.h>

int main() {
    int i = 0, total = 0;

    while (i < 100) {
        total += i;
        i++;
    }
    printf("Soma dos primeiros 100 numeros naturais: %d\n", total);

    return 0;
}