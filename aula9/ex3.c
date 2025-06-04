#include <stdio.h>

int main(){

    int n;
    printf("Informe o valor de n: ");
    scanf("%d",&n);

    int i;
    for (i = 0; i <= n; i++){
        if (i % 2 == 0){
            printf("%d ",i);
        }
    }








    return 0;
}