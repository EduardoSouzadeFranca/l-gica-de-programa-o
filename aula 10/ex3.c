#include <stdio.h>
#include <string.h>

int main(){

    char frase1[40], frase2[40], frasecompleta[82];
    printf("Digite a primeira palavra: ");
    scanf("%39[^\n]", frase1);
    
    getchar();
    
    printf("Digite a segunda palavra: ");
    scanf("%39[^\n]", frase2);

    strcat(frasecompleta, frase1);
    strcat(frasecompleta, " ");
    strcat(frasecompleta, frase2);


    printf("Frase resultante: %s\n", frasecompleta);


    return 0;
}