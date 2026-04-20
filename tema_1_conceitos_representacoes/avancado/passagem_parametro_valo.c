#include <stdio.h>

void dobrarValor(int valor) {
    valor *= 2; // Dobra o valor, mas isso não afetará a variável original
    printf("Valor dentro da função (dobrado): %d\n", valor); // Imprime o valor dobrado dentro da função
}

int main() {
    int numero = 5;
    printf("Valor original: %d\n", numero); // Imprime 5

    dobrarValor(numero); // Passa o valor para a função

    printf("Valor após dobrar: %d\n", numero); // Ainda imprime 5, pois a variável original não foi modificada
    return 0;
}