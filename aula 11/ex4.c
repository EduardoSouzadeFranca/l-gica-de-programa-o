#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[20];
    float preco;
} produto;

int buscarproduto(produto produtos[3],int qtdprodutos, char busca[20]){

    for(int i = 0; i < qtdprodutos; i++){
        if (strcmp(produtos[i].nome,busca) == 0){
            printf("%s custa R$ %.2f.",busca,produtos[i].preco);
            return 0; 
        }
    }
    printf("Produto não encontrado");
    return -1;
}

int main(){

    produto produtos[3];
    char busca[20];
    
    printf("--- CADASTRO ---");
    
    for (int i = 0; i < 3; i++){
        printf("\nProduto %d\n", i+1);
        printf("Nome: ");
        scanf("%19[^\n]",produtos[i].nome);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
        getchar();
    }

    printf("\nVocê desejar procurar qual produto? ");
    scanf("%19[^\n]",busca);

    buscarproduto(produtos,3,busca);

    return 0;
}


