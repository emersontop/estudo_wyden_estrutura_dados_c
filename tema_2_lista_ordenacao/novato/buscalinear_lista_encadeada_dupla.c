#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no* proximo;
    struct no* anterior;
} No;

void inserirNoInicio(No** inicio, int dado) {
    // Alocação de memória para o novo nó
    No* novo = (No*) malloc(sizeof(No));

    // Verificação de alocação de memória
    if (novo == NULL) {
        printf("Erro de alocação de memória!\n");
        return;
    }

    // Configuração do novo nó
    novo->dado = dado;
    novo->proximo = *inicio;
    novo->anterior = NULL;

    // Atualização do nó anterior do início, se existir
    if (*inicio != NULL) {
        (*inicio)->anterior = novo;
    }
    *inicio = novo;
}


void buscarNo(No* inicio, int valor) {
    // Percorre a lista para encontrar o valor
    No* atual = inicio;

    while (atual != NULL) {
        if (atual->dado == valor) {
            printf("Valor %d encontrado na lista.\n", valor);
            return;
        }
        atual = atual->proximo;
    }
    printf("Valor %d não encontrado na lista.\n", valor);
}

int main(){
    No* inicio = NULL;
    inserirNoInicio(&inicio, 10);
    inserirNoInicio(&inicio, 20);
    inserirNoInicio(&inicio, 30);
    buscarNo(inicio, 20); // Valor encontrado
    return 0;
}