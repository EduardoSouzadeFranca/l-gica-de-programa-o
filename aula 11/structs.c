#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[50];
    int idade;
    float nota;
};

int main(){

   /* struct aluno aluno1;

    aluno1.idade = 17;
    aluno1.nota = 7.5;
    strcpy(aluno1.nome, "yuri");*/

    
    //struct aluno aluno2 = {"Eduardo", 17, 7.5};//

    
    struct aluno aluno3;
    
    printf("Digite o nome: ");
    scanf("%49[^\n]",aluno3.nome);
    
    printf("Digite a idade: ");
    scanf("%d", &aluno3.idade);
    
    printf("Digite a nota: ");
    scanf("%f", &aluno3.nota);


    printf("Nome: %s\n", aluno3.nome);
    printf("Nome: %d\n", aluno3.idade);
    printf("Nome: %.2f\n", aluno3.nota);

    return 0;
}