#include <stdio.h>

void dobrarValorReferencia(int *valor) {
    *valor *= 2; // Dobra o valor usando o ponteiro, modificando a variável original
    printf("Valor dentro da função (dobrado): %d\n", *valor); // Imprime o valor dobrado dentro da função
}

int main() {
    int numero = 5;
    printf("Valor original: %d\n", numero); // Imprime 5

    dobrarValorReferencia(&numero); // Passa o endereço da variável para a função

    printf("Valor após dobrar: %d\n", numero); // Agora imprime 10, pois a variável original foi modificada
    return 0;
}