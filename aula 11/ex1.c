#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[50];
    int idade;
};

int main(){

    struct pessoa pessoa;

    printf("------- CADASTRO -------\n");
    printf("Digite seu nome: ");
    scanf("%49[^\n]", pessoa.nome);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa.idade);

    printf("\n---- DADOS ----\n");
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d", pessoa.idade);


    return 0;
}