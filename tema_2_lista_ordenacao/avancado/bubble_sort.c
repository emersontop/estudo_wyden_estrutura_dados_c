#include <stdio.h>

void bubbleSort(int arr[], int tamanho) {
    // Percorre todos os elementos do vetor
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                printf("Vetor após troca: ");
            } else {
                printf("Vetor sem troca: ");
            }
            printf("Comparando %d na posicao %d e %d na posicao %d\n" , arr[j], j, arr[j + 1], j + 1);
            for (int h = 0; h < tamanho; h++)
                    printf("%d ", arr[h]);
                printf("\n");
        }
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Vetor original: ");
    for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");

    bubbleSort(arr, tamanho);

    printf("Vetor ordenado: ");
    for (i = 0; i < tamanho; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}