#include <stdio.h>
#include <string.h>

const char *classificapeso(float peso, float altura) {
    
    float imc = peso/(altura * altura);
    
    if (imc < 18.5) {
        return "Abaixo do peso";
    }
    else if (imc >= 18.5 && imc < 24.99){
        return "Peso normal";
    }
    else if (imc >= 25 && imc < 29.99){
        return "Sobrepeso";
    }
    else if (imc >= 30 && imc < 34.99){
        return "Obesidade grau 1";
    }
    else if (imc >= 35 && imc < 39.99){
        return "Obesidade grau 2";
    }
    else{
        return "Obesidade grau 3";
    }
}

int main(){ 


    float peso, altura;

    printf("peso(kg): ");
    scanf("%f", &peso);
    printf("altura(metros): ");
    scanf("%f", &altura);

    const char* classfiicacaopeso = classificapeso(peso,altura);

    printf("Classificação: %s\n", classfiicacaopeso);

    return 0;
}