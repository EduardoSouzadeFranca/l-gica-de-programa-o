#include <stdio.h>

int main(){
    
    int idade;
    
    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade > 60){
        printf("Você é um idoso");
    }
    else if (idade < 60 && idade > 18){
        printf("Você é maior de idade");
    }
    else if (idade < 18 && idade > 0){
        printf("Você é menor de idade");
    }
    
    return 0;
}