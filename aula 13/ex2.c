#include <stdio.h>
#include <string.h>
#include <locale.h>

void trocar(int *valor1, int *valor2){

    int troca = *valor1;
    *valor1 = *valor2;
    *valor2 = troca;
    
    printf("\nvalor 1: %d\n",*valor1);
    printf("valor 2: %d",*valor2);
}

int main(){

    setlocale(LC_ALL, "portuguese");

    int valor1, valor2;
    
    printf("Digite o valor 1: ");
    scanf("%d", &valor1);

    printf("Digite o valor 2: ");
    scanf("%d", &valor2);

    trocar(&valor1,&valor2);

    return 0;
}