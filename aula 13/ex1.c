#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    int valor;
    int *ptr = &valor;
    
    printf("Digite o valor original: ");
    scanf("%d", &valor);

    int valor2 = valor;

    printf("Digite o novo valor: ");
    scanf("%d", *&ptr);

    printf("Valor original: %d\n", valor2);
    ptr = &valor;
    printf("Novo valor após a modificação via ponteiro: %d", *ptr);

    return 0;
}