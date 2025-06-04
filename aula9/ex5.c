#include <stdio.h>

int ehpar(int x){
    if ( x % 2 == 0){
        printf("O número é par.");
        return 1;
    }
    else {
        printf("O número é ímpar.");
        return 0;
    }
}


int main(){

    int num;
    printf("Digite um número: ");
    scanf("%d",&num);
    
    ehpar(num);

    return 0;
}