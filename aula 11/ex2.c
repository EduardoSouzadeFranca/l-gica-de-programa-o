#include <stdio.h>
#include <string.h>

struct alunos{
    char nome[50];
    float nota;
};


int main(){

    struct alunos alunos[100];
    int qtdalunos;
    float soma = 0, media = 0;
    printf("Quantas alunos voce quer cadastrar? ");
    scanf("%d", &qtdalunos); 
    getchar();


    for (int i = 0; i < qtdalunos; i++){ 
        printf("\nAluno %d\n", i+1);
        printf("Nome: ");
        scanf("%49[^\n]", alunos[i].nome);
        printf("Nota: ");
        scanf("%f", &alunos[i].nota);
        soma += alunos[i].nota;
        getchar();
    }

    for (int j = 0; j < qtdalunos; j++){
        printf("\nDados do aluno %d:\n", j+1);
        printf("Nome: %s\n", alunos[j].nome);
        printf("Nota: %.2f\n", alunos[j].nota);
    }

    media = soma/qtdalunos;

    printf("\nA media geral e %.2f", media);

    return 0;
}