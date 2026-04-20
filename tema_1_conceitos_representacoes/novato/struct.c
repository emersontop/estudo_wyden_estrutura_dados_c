#include <stdio.h>

typedef struct {
    char name[50];
    int idade;
    float media;
} Aluno;

int main(){
    Aluno aluno1;

    printf("Digite o nome do aluno: ");
    fgets(aluno1.name, sizeof(aluno1.name), stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno1.idade);

    printf("Digite a média do aluno: ");
    scanf("%f", &aluno1.media);

    printf("\nInformações do Aluno:\n");
    printf("Nome: %s", aluno1.name);
    printf("Idade: %d\n", aluno1.idade);
    printf("Média: %.2f\n", aluno1.media);

    return 0;
}