#include <stdio.h>

int main(){
    
    char nome[10];
    int idade;
    float altura;
    char genero;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    
    getchar();
    
    printf("Digite seu genero: ");
    scanf("%c", &genero);
    
    printf("\nNome: %s\nIdade: %d\nAltura: %.2f\nGenero: %c",nome,idade,altura,genero);
    
    /*
    printf("\nNome: %s\n",nome);
    printf("Idade: %d\n",idade);
    printf("Altura: %.2f\n",altura);
    */

    return 0;
}