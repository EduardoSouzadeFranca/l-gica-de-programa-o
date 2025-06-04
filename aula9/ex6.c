#include <stdio.h>

int main(){

    int ordem [5];
    
    int i;
    for (i = 0; i < 5; i++){
        printf("Digite um número: ");
        scanf("%d",&ordem[i]);
    }

    for (i = 5; i > 0; i--){
        printf("%d \n",ordem[i-1]);
    }
    
    int matriz [2][2];
    
    int j;
    int soma;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("Digite um número: ");
            scanf("%d",&matriz[i][j]);
            soma += matriz[i][j]; 
        }
    }
    
    printf("soma dos números: %d", soma);
    return 0;

}
