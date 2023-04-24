#include <stdio.h>
#include <stdlib.h>

int main() {
    int pontos1 = 0, pontos2 = 0, entrada;

    while ((pontos1 < 21 && pontos2 < 21) || abs(pontos1 - pontos2) <= 2) {
        do {
            printf("Quem pontuou?\n");
            scanf("%d", &entrada);
            if (entrada != 1 && entrada != 2)
                printf("Valor invalido.\n");
        } while (entrada != 1 && entrada != 2);
        
        if (entrada == 1)
            pontos1++;
        else
            pontos2++;
    }
    if (pontos1 > pontos2)
        printf("O jogador 1 venceu a partida com %d a %d.", pontos1, pontos2);
    else
        printf("O jogador 2 venceu a partida com %d a %d.", pontos2, pontos1);

    return 0;
}