#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    int qtd_vidas;
} Aventureiro;


int main() {

    Aventureiro *ponteiro_aventureiro = (Aventureiro *)malloc(sizeof(Aventureiro)); // Alocando memória para um Aventureiro

    prointf("Digite o nome do aventureiro: ");
    scanf("%s", ponteiro_aventureiro->nome); // Lendo o nome do aventureiro

    printf("Digite a idade do aventureiro: ");
    scanf("%d", &ponteiro_aventureiro->idade); // Lendo a idade do aventureiro

    printf("Digite a quantidade de vidas do aventureiro: ");
    scanf("%d", &ponteiro_aventureiro->qtd_vidas); // Lendo a quantidade de vidas do aventureiro

    printf("\nInformações do Aventureiro:\n");
    printf("Nome: %s\n", ponteiro_aventureiro->nome);
    printf("Idade: %d\n", ponteiro_aventureiro->idade);
    printf("Quantidade de Vidas: %d\n", ponteiro_aventureiro->qtd_vidas);
    
    free(ponteiro_aventureiro); // Liberando a memória alocada
    return 0;
}