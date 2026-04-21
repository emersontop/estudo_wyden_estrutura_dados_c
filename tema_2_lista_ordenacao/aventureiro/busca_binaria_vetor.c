#include <stdio.h>
#include <stdlib.h>

void buscaBinariaIterativa(int vetor_ordenado[], int tamanho, int valor){
    // O vetor deve estar ordenado para a busca binária funcionar corretamente
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    // Enquanto o início for menor ou igual ao fim, continue a busca
    while(inicio <= fim){
        // Calcula o índice do meio do vetor
        meio = (inicio + fim) / 2;

        // Verifica se o valor no meio é igual ao valor buscado
        if(vetor_ordenado[meio] == valor){
            printf("Valor encontrado no índice: %d\n", meio);
            return;
        } else if(vetor_ordenado[meio] < valor){
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

    printf("Valor não encontrado no vetor.\n");
}

void buscaBinariaRecursiva(int vetor_ordenado[], int inicio, int fim, int valor){
    if(inicio > fim){
        printf("Valor não encontrado no vetor.\n");
        return;
    }

    int meio = (inicio + fim) / 2;

    if(vetor_ordenado[meio] == valor){
        printf("Valor encontrado no índice: %d\n", meio);
        return;
    } else if(vetor_ordenado[meio] < valor){
        buscaBinariaRecursiva(vetor_ordenado, meio + 1, fim, valor);
    } else {
        buscaBinariaRecursiva(vetor_ordenado, inicio, meio - 1, valor);
    }
}


int main(){

    int vetor_ordenado[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    buscaBinariaIterativa(vetor_ordenado, 10, 7);
    buscaBinariaRecursiva(vetor_ordenado, 0, 9, 7);


    return 0;
}