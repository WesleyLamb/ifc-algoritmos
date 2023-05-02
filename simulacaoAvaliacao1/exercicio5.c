#include <stdio.h>

int main() {
    int a, b = 0, i, j;
    scanf("%d", &a);
    i = 1;
    while (i < a) {
        j = i;
        while (j <= a) {
            printf("%d, %d, %d\n", i, j, b);
            j = j + 1;
        }
        i = i + 1;
    }
    b = a + (i * j);
    printf("%d, %d, %d", i, j, b);

    return 0;
}