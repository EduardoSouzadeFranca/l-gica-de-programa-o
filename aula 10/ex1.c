#include <stdio.h>
#include <string.h>

int main(){

    char palavra[20];
    printf("Digite uma palavra: ");
    scanf("%19[^\n]", palavra);

    int tamanho = strlen(palavra);

    if (tamanho > 15){
        printf("Palavra Longa");
    }
    else if (tamanho > 8 && tamanho <= 15){
        printf("Palavra média");
    }
    else if (tamanho > 5 && tamanho <= 8){
        printf("Palavra pequena");
    }

    return 0;
}