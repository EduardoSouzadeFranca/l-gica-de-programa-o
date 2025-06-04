#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[20], palavra2[20];
    printf("Digite a primeira palavra: ");
    scanf("%19[^\n]", palavra1);
    
    getchar();
    
    printf("Digite a segunda palavra: ");
    scanf("%19[^\n]", palavra2);

    int resultado = strcmp(palavra1, palavra2);

    if (resultado == 0){
        printf("As palavras são iguais.");
    }
    else {
        printf("As palavras são Diferentes.");
    }

    return 0;
}