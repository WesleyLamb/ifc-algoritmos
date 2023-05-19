#include <stdio.h>
#define VET_SIZE 10

void inverter(int* xp, int* yp) {
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubbleSort(int arr[], int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				inverter(&arr[j], &arr[j + 1]);
		}
	}
}

int main() {
	int vetEntrada[VET_SIZE], vetPares[VET_SIZE], vetImpares[VET_SIZE], vetSaida[VET_SIZE], 
	    	i, j, contPares = 0, contImpares, ordenado = 0, iPares = 0, iImpares = 0;

	for (i = 0; i < VET_SIZE; i++) {
		printf("Informe um valor para a posicao %i do vetor: ", i + 1);
		scanf("%i", &vetEntrada[i]);

		if (vetEntrada[i] % 2 == 0)
			contPares++;
		else
			contImpares++;
	}

	for (i = 0; i < VET_SIZE; i++) {
		if (vetEntrada[i] % 2 == 0) {
			vetPares[iPares] = vetEntrada[i];
			iPares++;
		} else {
			vetImpares[iImpares] = vetEntrada[i];
			iImpares++;
		}
	}
	bubbleSort(vetPares, iPares);
	bubbleSort(vetImpares, iImpares);

	for (i = 0; i < iPares; i++) {
		vetSaida[i] = vetPares[i];
	}

	for (i = 0; i < iImpares; i++) {
		vetSaida[iPares + i] = vetImpares[iImpares - i - 1];
	}

	printf("\nvetSaida = ");
	for (i = 0; i < VET_SIZE; i++) {
		if (i != 0)
			printf(", ");
		printf("%i", vetSaida[i]);
	}
	printf("\n");
	
	return 0;
}
