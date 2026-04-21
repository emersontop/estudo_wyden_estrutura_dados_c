// Algoritmo Insertion Sort em C
#include <stdio.h>

void insertionSort(int arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		// Move os elementos maiores que key para frente
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main() {
	int arr[] = {5, 2, 9, 1, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	int i;

	printf("Vetor original: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	insertionSort(arr, n);

	printf("Vetor ordenado: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
