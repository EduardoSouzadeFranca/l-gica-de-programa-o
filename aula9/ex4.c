#include <stdio.h>

int main(){

    int num = -1;
    int soma = 0;

    do {

        printf("Digite um número: ");
        scanf("%d",&num);
        soma += num;

    } while (num != 0);

    printf("A soma dos número digitados é %d",soma);
    return 0;
}