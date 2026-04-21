#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no* proximo;
    struct no* anterior;
} No;

// Função para inserir no início da lista
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


void listarParaFrente(No* inicio) {
    No* atual = inicio;
    printf("Percorrendo para frente:\n");
    while (atual != NULL) {
        printf("Valor: %d\n", atual->dado);
        atual = atual->proximo;
    }
}

No* obterUltimoNo(No* inicio) {
    No* atual = inicio;
    No* ultimo = NULL;
    while (atual != NULL) {
        ultimo = atual;
        atual = atual->proximo;
    }
    return ultimo;
}

void listarParaTras(No* ultimo) {
    No* atual = ultimo;
    printf("Percorrendo para trás:\n");
    while (atual != NULL) {
        printf("Valor: %d\n", atual->dado);
        atual = atual->anterior;
    }
}

int main() {
    No* inicio = NULL;

    // Inserindo nós no início da lista (ordem final: 10, 20, 30)
    inserirNoInicio(&inicio, 30);
    inserirNoInicio(&inicio, 20);
    inserirNoInicio(&inicio, 10);

    // Percorrendo para frente
    listarParaFrente(inicio);

    // Obtendo o último nó
    No* ultimo = obterUltimoNo(inicio);

    // Percorrendo para trás a partir do último nó
    listarParaTras(ultimo);

    // Liberando a memória
    No* atual = inicio;
    while (atual != NULL) {
        No* temp = atual;
        atual = atual->proximo;
        free(temp);
    }
    inicio = NULL;

    return 0;
}