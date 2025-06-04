#include <stdio.h>

int main(){
    
    char nome[10];
    int idade;
    float nota;
    

    printf("Qual o seu nome ? ");
    scanf("%s", nome);
    
    printf("Qual a sua idade ? ");
    scanf("%d", &idade);
    
    printf("Qual a sua nota ? ");
    scanf("%f", &nota);
    
    printf("\nAluno: %s\nIdade: %d\nNota: %.1f",nome,idade,nota);
    
    /*
    printf("\nNome: %s\n",nome);
    printf("Idade: %d\n",idade);
    printf("Altura: %.2f\n",altura);
    */

    return 0;
}