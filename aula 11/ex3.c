#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[50];
    int idade;
};

void exibirpessoa(struct pessoa usuario[1]){
    printf("\nBem-vindo(a), %s!\n", usuario[1].nome); 
    printf("Seu Dados:\n");
    printf("Nome: %s\n", usuario[1].nome);
    printf("Idade: %d\n", usuario[1].idade);
}

int main(){

    struct pessoa usuario[1];

    printf("Qual o seu nome ? ");
    scanf("%49[^\n]", usuario[1].nome);
    printf("Qual a sua idade ? ");
    scanf("%d", &usuario[1].idade);

    exibirpessoa(usuario);

    return 0;
}