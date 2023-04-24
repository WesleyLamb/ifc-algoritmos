#include <stdio.h>

int main() {
    int i = 100;

    while (i >= -100) {
        if (i % 5 == 0)
            printf("%d e um multiplo de 5\n", i);
        
        i--;
    }

    return 0;
}