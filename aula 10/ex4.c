#include <stdio.h>
#include <string.h>

int main(){

    char palavra1[20], palavra2[20], palavra3[20];
    printf("Palavra 1: ");
    scanf("%19[^\n]", palavra1);
    
    getchar();
    
    printf("Palavra 2: ");
    scanf("%19[^\n]", palavra2);

    getchar();
    
    printf("Palavra 3: ");
    scanf("%19[^\n]", palavra3);

    printf("%s\n%s\n%s\n",palavra3,palavra2,palavra1);

    return 0;
}