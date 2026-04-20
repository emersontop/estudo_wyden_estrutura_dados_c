#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no* proximo;
} No;

int main() {
    // 1. Alocando memória para os 3 nós
    No* n1 = (No*) malloc(sizeof(No));
    No* n2 = (No*) malloc(sizeof(No));
    No* n3 = (No*) malloc(sizeof(No));

    // 2. Atribuindo valores e conectando a lista
    n1->dado = 10;
    n1->proximo = n2; // n1 aponta para n2

    n2->dado = 20;
    n2->proximo = n3; // n2 aponta para n3

    n3->dado = 30;
    n3->proximo = NULL; // n3 é o último

    // 3. Printando os valores percorrendo a lista
    // Usamos um ponteiro auxiliar para não "perder" o início da lista
    No* atual = n1;
    while (atual != NULL) {
        printf("Valor: %d\n", atual->dado);
        atual = atual->proximo; // Avança para o próximo nó
    }

    // 4. Liberando a memória (importante!)
    free(n1);
    free(n2);
    free(n3);

    return 0;
}

