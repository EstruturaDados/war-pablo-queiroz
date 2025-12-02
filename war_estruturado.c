#include <stdio.h>
#include <string.h>

/*
    Struct Territorio
    Armazena os dados básicos do jogo War:
    - nome: nome do território
    - cor: cor do exército
    - tropas: quantidade de tropas naquele território
*/
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Vetor que armazenará 5 territórios
    Territorio territorios[5];

    printf("=== Cadastro de Territórios do Jogo War ===\n\n");
    printf("Vamos cadastrar os 5 territorios iniciais do nosso mundo.\n\n");

    // Entrada dos dados dos 5 territórios
    for (int i = 0; i < 5; i++) {
        printf("--- Cadastrando Territorio %d ---\n", i + 1);

        printf("Digite o nome do territorio: ");
        scanf("%s", territorios[i].nome);  // le nome sem espaços

        printf("Digite a cor do exercito: ");
        scanf("%s", territorios[i].cor);   // le cor sem espaços

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("-----------------------------------\n");
    }

    // Exibindo os dados cadastrados
    printf("=============================================\n");
    printf("=== MAPA DO MUNDO - ESTADO ATUAL ===\n");
    printf("=============================================\n");

    for (int i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Dominado por: Exercito %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------------\n");
    }

    return 0;
}