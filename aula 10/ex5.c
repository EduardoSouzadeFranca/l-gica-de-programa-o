#include <stdio.h>
#include <string.h>

int ehPalindromo(char palavra[20]){

    int tamanho = strlen(palavra);
    int i = 0;
    
    for(i = 0; i < tamanho / 2; i++){
        if (palavra[i] != palavra[tamanho - i - 1]){
            return 1;
        }
    }
    return 0;
}

int main(){

    char palavra[20];
    printf("Digite uma palavra: ");
    scanf("%19[^\n]", palavra);

    getchar();
   
    int palindromo = ehPalindromo(palavra);

    if (palindromo == 0){
        printf("É palíndromo!");
    }
    else {
        printf("Não é palíndromo.");
    }

   return 0;
}