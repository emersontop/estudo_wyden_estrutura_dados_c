#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct No {
    int valor;
    struct No *prox;
} No;

typedef struct {
    No *inicio;
    No *fim;
    int tamanho;
} Fila;

void inicializarFila(Fila *f) {
    f->inicio = NULL;
    f->fim = NULL;
    f->tamanho = 0;
}

bool filaVazia(Fila *f) {
    return f->inicio == NULL;
}

void enfileirar(Fila *f, int valor) {
    No *novo = (No *)malloc(sizeof(No));
    if (novo == NULL) {
        printf("Erro: falha de memoria.\n");
        return;
    }

    novo->valor = valor;
    novo->prox = NULL;

    if (filaVazia(f)) {
        f->inicio = novo;
        f->fim = novo;
    } else {
        f->fim->prox = novo;
        f->fim = novo;
    }

    f->tamanho++;
}

bool desenfileirar(Fila *f, int *valorRemovido) {
    if (filaVazia(f)) {
        return false;
    }

    No *temp = f->inicio;
    *valorRemovido = temp->valor;
    f->inicio = temp->prox;

    if (f->inicio == NULL) {
        f->fim = NULL;
    }

    free(temp);
    f->tamanho--;
    return true;
}

bool frente(Fila *f, int *valor) {
    if (filaVazia(f)) {
        return false;
    }
    *valor = f->inicio->valor;
    return true;
}

void imprimirFila(Fila *f) {
    No *atual = f->inicio;
    printf("Fila: ");
    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

void liberarFila(Fila *f) {
    int lixo;
    while (desenfileirar(f, &lixo)) {
        // remove todos os elementos
    }
}

int main(void) {
    Fila fila;
    inicializarFila(&fila);

    enfileirar(&fila, 10);
    enfileirar(&fila, 20);
    enfileirar(&fila, 30);

    imprimirFila(&fila);

    int removido;
    if (desenfileirar(&fila, &removido)) {
        printf("Removido: %d\n", removido);
    }

    int primeiro;
    if (frente(&fila, &primeiro)) {
        printf("Frente da fila: %d\n", primeiro);
    }

    imprimirFila(&fila);
    printf("Tamanho: %d\n", fila.tamanho);

    liberarFila(&fila);
    return 0;
}