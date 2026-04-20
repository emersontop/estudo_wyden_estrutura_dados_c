#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no* proximo;
    struct no* anterior;
} No;

int main() {
    // 1. Alocando memória para os 3 nós
    No* n1 = (No*) malloc(sizeof(No));
    No* n2 = (No*) malloc(sizeof(No));
    No* n3 = (No*) malloc(sizeof(No));

    // 2. Atribuindo valores e conectando a lista
    n1->dado = 10;
    n1->proximo = n2; // n1 aponta para n2
    n1->anterior = NULL; // n1 é o primeiro

    n2->dado = 20;
    n2->proximo = n3; // n2 aponta para n3
    n2->anterior = n1; // n2 aponta para n1

    n3->dado = 30;
    n3->proximo = NULL; // n3 é o último
    n3->anterior = n2; // n3 aponta para n2

    // 3. Printando os valores percorrendo a lista para frente
    // Usamos um ponteiro auxiliar para não "perder" o início da lista
    No* atual = n1;
    printf("Percorrendo para frente:\n");
    while (atual != NULL) {
        printf("Valor: %d\n", atual->dado);
        atual = atual->proximo; // Avança para o próximo nó
    }

    // 4. Printando os valores percorrendo a lista para trás
    printf("Percorrendo para trás:\n");
    atual = n3; // Começamos do último nó
    while (atual != NULL) {
        printf("Valor: %d\n", atual->dado);
        atual = atual->anterior; // Volta para o nó anterior
    }

    // 5. Liberando a memória (importante!)
    free(n1);
    free(n2);
    free(n3);

    return 0;
}