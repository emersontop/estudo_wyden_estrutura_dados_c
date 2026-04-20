#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = &x; // ptr é um ponteiro que armazena o endereço de x

    printf("Valor de x: %d\n", x); // Imprime o valor de x
    printf("Endereço de x: %p\n", &x); // Imprime o endereço de x
    printf("Valor armazenado em ptr: %p\n", ptr); // Imprime o valor armazenado em ptr (endereço de x)
    printf("Valor apontado por ptr: %d\n", *ptr); // Imprime o valor apontado por ptr (valor de x)

    // modificando o valor de x usando o ponteiro
    *ptr = 20; // Modifica o valor de x para 20 usando o ponteiro   
    printf("Novo valor de x: %d\n", x); // Imprime o novo valor de x

    return 0;
}