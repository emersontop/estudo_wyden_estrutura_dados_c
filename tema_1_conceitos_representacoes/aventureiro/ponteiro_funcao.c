#include <stdio.h>

void saudar() {
    printf("Olá, aventureiro!\n");
}

int main() {
    // declarao ponteiro para função
    // que nao recebe argumentos e retorna void
    void (*ponteiro_funcao)() = saudar; // ponteiro para função saudar

    // Chamando a função usando o ponteiro
    ponteiro_funcao(); // Isso irá imprimir "Olá, aventureiro!"

    return 0;
}