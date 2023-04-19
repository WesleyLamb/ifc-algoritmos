#include <stdio.h>

int main() {
	int entrada = 1, votos1 = 0, votos2 = 0, votos3 = 0, votos4 = 0, votosNulos = 0, votosBrancos = 0;

	while (entrada != 0) {

		printf("Informe sua intencao de voto:\n");
		scanf("%d", &entrada);

		switch(entrada) {
			case 1: 
				votos1++; 
				break;
			case 2:
				votos2++;
				break;
			case 3:
				votos3++;
				break;
			case 4:
				votos4++;
				break;
			case 5:
				votosNulos++;
				break;
			case 6:
				votosBrancos++;
				break;
		}
	}

	printf("Resultado das eleicoes:\n");
	printf("Votos candidato 1: %d\nVotos candidato 2: %d\nVotos candidato 3: %d\nVotos candidato 4: %d\nVotos em branco: %d\nVotos nulos: %d\n", votos1, votos2, votos3, votos4, votosBrancos, votosNulos);

	return 0;
}
