#include <stdio.h>
#include <string.h>

void calcular(float num1, float num2, float *soma, float *multiplicacao){
    *soma = num1 + num2;
    *multiplicacao = num1 * num2;
}

int main(){ 

    float num1, num2;
    float resultadosoma;
    float resultadomultiplicacao;
    
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    calcular(num1,num2,&resultadosoma,&resultadomultiplicacao);

    printf("Soma: %.2f\n", resultadosoma);
    printf("Multiplicação: %.2f", resultadomultiplicacao);

    return 0;
}