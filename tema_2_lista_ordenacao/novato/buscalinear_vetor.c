#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int lista[], int tamanho, int valor){
    // Percorre a lista do início ao fim
    for(int i = 0; i < tamanho; i++){
        // Verifica se o elemento atual é igual ao valor buscado
        if(lista[i] == valor){
            return i; // Retorna o índice do elemento encontrado
        }
    }
    return -1; // Retorna -1 se o elemento não for encontrado
}

void valorABuscar(int *valor){
    printf("Digite o valor a ser buscado: ");
    scanf("%d", valor);
}


int main(){
    // cria a lista de inteiros
    int lista[] = {10, 20, 30, 40, 50};

    // Calcula o tamanho da lista
    int tamanho = sizeof(lista) / sizeof(lista[0]);

    // Valor a ser buscado
    int valor;
    valorABuscar(&valor);

    int indice = buscaLinear(lista, tamanho, valor);

    if(indice != -1){
        printf("Elemento encontrado no índice: %d\n", indice);
    } else {
        printf("Elemento não encontrado\n");
    }

    return 0;
}