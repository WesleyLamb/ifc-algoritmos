#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

#define MAX_CAR_COUNT 5000
#define BUFFER_SIZE 4096

char combustiveis[][10] = {"alcool", "diesel", "gasolina"};

struct RegistroVeiculos {
    char proprietario[100];
    char combustivel[9];
    char modelo[50]; 
    char cor[50];
    char chassi[50];
    int ano;
    char placa[7];
};

void alimentarProprietario(char *proprietario) {
    char *entrada = 0;
    entrada = malloc(sizeof(proprietario));
    do {
        printf("Informe o nome do proprietario: ");
        getc(stdin);
        scanf("%[^\n]", entrada);
        if (strlen(entrada) == 0)
            printf("Entrada invalida.\n");
    } while (strlen(entrada) == 0);
    strcpy(proprietario, entrada);
}

void alimentarCombustivel(char *combustivel) {
    char entrada;
    
    do {
        printf("Informe o tipo de combustivel [A - Alcool, B - Diesel, C - gasolina]: ");
        getc(stdin);
        scanf("%c", &entrada);
        if ((toupper(entrada) != 'A') && (toupper(entrada) != 'B') && (toupper(entrada) != 'C'))
            printf("Entrada invalida.\n");
    } while ((toupper(entrada) != 'A') && (toupper(entrada) != 'B') && (toupper(entrada) != 'C'));

    switch (entrada) {
        case 'A':
        case 'a':
            strcpy(combustivel, combustiveis[0]);
            break;
        case 'B':
        case 'b':
            strcpy(combustivel, combustiveis[1]);
            break;
        default:
            strcpy(combustivel, combustiveis[2]);
            break;
    }
}

void alimentarModelo(char *modelo) {
    char *entrada = 0;
    entrada = malloc(sizeof(modelo));
    do {
        printf("Informe o modelo do veiculo: ");
        getc(stdin);
        scanf("%[^\n]", entrada);
        if (strlen(entrada) == 0)
            printf("Entrada invalida.\n");
    } while (strlen(entrada) == 0);
    strcpy(modelo, entrada);
}

void alimentarCor(char *cor) {
    char *entrada = 0;
    entrada = malloc(sizeof(cor));
    do {
        printf("Informe a cor do veiculo: ");
        getc(stdin);
        scanf("%[^\n]", entrada);
        if (strlen(entrada) == 0)
            printf("Entrada invalida.\n");
    } while (strlen(entrada) == 0);
    strcpy(cor, entrada);
}

void alimentarChassi(char *chassi) {
    char *entrada = 0;
    entrada = malloc(sizeof(chassi));
    do {
        printf("Informe o chassi do veiculo: ");
        getc(stdin);
        scanf("%[^\n]", entrada);
        if (strlen(entrada) == 0)
            printf("Entrada invalida.\n");
    } while (strlen(entrada) == 0);
    strcpy(chassi, entrada);
}

void alimentarAno(int *ano) {
    int entrada = 0;
    do {
        printf("Informe o ano do veiculo: ");
        getc(stdin);
        scanf("%d", &entrada);
        if (entrada <= 0)
            printf("Entrada invalida.\n");
    } while (entrada <= 0);
    *ano = entrada;
}

bool validarPlaca(char *placa) {
    bool valido = strlen(placa) == 7;
    int i = 0;
    while ((valido) && (i < strlen(placa) - 1)) {
        if (i <= 2) {
            valido = isalpha(placa[i]);
        } else {
            valido = isdigit(placa[i]);
        }
        i++;
    }
    return valido;
}

void alimentarPlaca(char *placa) {
    char *entrada = 0;
    entrada = malloc(sizeof(placa));
    do {
        printf("Informe a placa do veiculo: ");
        getc(stdin);
        scanf("%[^\n]", entrada);
        if (strlen(entrada) == 0 || !validarPlaca(entrada))
            printf("Entrada invalida.\n");
    } while (strlen(entrada) == 0 || !validarPlaca(entrada));
    strcpy(placa, entrada);
}

void listarCondicaoB(struct RegistroVeiculos *registros, int contRegistros) {
    struct RegistroVeiculos *registrosFiltrados = 0;
    int contRegistrosFiltrados = 0;

    for (int i = 0; i < contRegistros; i++) {
        if ((registros[i].ano >= 1980) && (strcmp(registros[i].combustivel, combustiveis[1]) == 0)) {
            contRegistrosFiltrados++;
            registrosFiltrados = realloc(registrosFiltrados, contRegistrosFiltrados * sizeof(struct RegistroVeiculos));
            registrosFiltrados[contRegistrosFiltrados - 1] = registros[i];
        }
    }
    printf("Condicao B: \n");
    if (contRegistrosFiltrados > 0) {
        for (int i = 0; i < contRegistrosFiltrados; i++) {
            printf("Proprietario %d = %s\n", i + 1, registrosFiltrados[i].proprietario);
        }
    } else {
        printf("Nenhum registro atende a condicao B.\n");
    }
}

void listarCondicaoC(struct RegistroVeiculos *registros, int contRegistros) {
    struct RegistroVeiculos *registrosFiltrados = 0;
    int contRegistrosFiltrados = 0;

    for (int i = 0; i < contRegistros; i++) {
        if ((toupper(registros[i].placa[0]) == 'A') && ((registros[i].placa[6] == '0') || (registros[i].placa[6] == '2') || (registros[i].placa[6] == '4') || (registros[i].placa[6] == '7'))) {
            contRegistrosFiltrados++;
            registrosFiltrados = realloc(registrosFiltrados, contRegistrosFiltrados * sizeof(struct RegistroVeiculos));
            registrosFiltrados[contRegistrosFiltrados - 1] = registros[i];
        }
    }
    printf("Condicao C: \n");
    if (contRegistrosFiltrados > 0) {
        for (int i = 0; i < contRegistrosFiltrados; i++) {
            printf("Placa %d = %s\n", i + 1, registrosFiltrados[i].placa);
        }
    } else {
        printf("Nenhum registro atende a condicao C.\n");
    }
}

bool isVowel(char aChar) {
    aChar = toupper(aChar);
    return (aChar == 'A' || aChar == 'E' || aChar == 'I' || aChar == 'O'|| aChar == 'U');
}

char *subString(char *aString, int startingPos, int charCount) {
    char *result = 0;
    result = malloc(charCount * sizeof(char));
    int i = 0;

    for (int j = startingPos; j <= charCount; j++) {
        if (aString[i]) {
            result[j] = aString[i];
        }
        j++;
    }
    return result;
}

void listarCondicaoD(struct RegistroVeiculos *registros, int contRegistros) {
    struct RegistroVeiculos *registrosFiltrados = 0;
    int contRegistrosFiltrados = 0;

    for (int i = 0; i < contRegistros; i++) {
        if (isVowel(registros[i].placa[1]) && (((registros[i].placa[3] - '0') + (registros[i].placa[4] - '0') + (registros[i].placa[5] - '0') + (registros[i].placa[6] - '0')) % 2 == 0)) {
            contRegistrosFiltrados++;
            registrosFiltrados = realloc(registrosFiltrados, contRegistrosFiltrados * sizeof(struct RegistroVeiculos));
            registrosFiltrados[contRegistrosFiltrados - 1] = registros[i];
        }
    }
    printf("Condicao D: \n");
    if (contRegistrosFiltrados > 0) {
        for (int i = 0; i < contRegistrosFiltrados; i++) {
            printf("Placa %d = %s\n", i + 1, registrosFiltrados[i].placa);
        }
    } else {
        printf("Nenhum registro atende a condicao D.\n");
    }
}

void condicaoE(struct RegistroVeiculos *registros, int contRegistros) {
    char *entradaChassi = 0;
    entradaChassi = malloc(sizeof(registros[0].chassi));
    struct RegistroVeiculos *registroFiltrado = 0;
    registroFiltrado = malloc(sizeof(struct RegistroVeiculos));

    printf("Informe um chassi para ser consultado: ");
    getc(stdin);
    scanf("%[^\n]", entradaChassi);

    for (int i = 0; i < contRegistros; i++) {
        if (strcmp(registros[i].chassi, entradaChassi) == 0) {
            if ((registros[i].placa[3] != '0') && (registros[i].placa[4] != '0') && (registros[i].placa[5] != '0') && (registros[i].placa[6] != '0')) {
                alimentarChassi(registros[i].chassi);
                registroFiltrado = &registros[i];
            } else {
                printf("O cadastro informado possui numeral 0 na placa.");
            }
        }
    }
    printf("Condicao E: \n");
    if (registroFiltrado) {
            printf("Chassi = %s\n", registroFiltrado->chassi);
    } else {
        printf("Nenhum registro atende a condicao E.\n");
    }
}

int main() {
    struct RegistroVeiculos *registros;
    int qtdeRegistros = 0;
    char *entrada;

    do {
        printf("Informe a quantidade de veiculos que serao cadastrados: ");
        scanf("%d", &qtdeRegistros);
        if ((qtdeRegistros <= 0) || (qtdeRegistros > MAX_CAR_COUNT))
            printf("Entrada invalida. Informe um valor entre 1 e 5000.\n");
    } while ((qtdeRegistros <= 0) || (qtdeRegistros > MAX_CAR_COUNT));

    registros = malloc(qtdeRegistros * sizeof(struct RegistroVeiculos));

    for (int i = 0; i < qtdeRegistros; i++) {
        alimentarProprietario(registros[i].proprietario);
        alimentarCombustivel(registros[i].combustivel);
        alimentarModelo(registros[i].modelo);
        alimentarCor(registros[i].cor);
        alimentarChassi(registros[i].chassi);
        alimentarAno(&registros[i].ano);
        alimentarPlaca(registros[i].placa);
    }

    for (int i = 0; i < qtdeRegistros; i++) {
        printf("registros[%d] = {\n", i);

        printf("\tproprietario = %s,\n", registros[i].proprietario);
        printf("\tcombustivel = %s,\n", registros[i].combustivel);
        printf("\tmodelo = %s,\n", registros[i].modelo);
        printf("\tcor = %s,\n", registros[i].cor);
        printf("\tchassi = %s,\n", registros[i].chassi);
        printf("\tano = %d,\n", registros[i].ano);
        printf("\tplaca = %s\n", registros[i].placa);

        printf("}\n");
    }

    printf("Filtros: \n");
    listarCondicaoB(registros, qtdeRegistros);
    listarCondicaoC(registros, qtdeRegistros);
    listarCondicaoD(registros, qtdeRegistros);
    condicaoE(registros, qtdeRegistros);
    printf("\n");

    return 0;
}