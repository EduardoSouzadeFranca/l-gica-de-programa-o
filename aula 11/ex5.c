#include <stdio.h>
#include <string.h>

typedef struct {
    char rua[30];
    int numero;
    char cidade[30];
} endereco;

typedef struct {
    char nome[30];
    char cargo[30];
    endereco endereco;
} funcionarios;


int main(){

    funcionarios funcionario[2];

    printf("\n--- CADASTRO ---");
    
    for (int i = 0; i < 2; i++){
        printf("\n%dº Funcionário\n", i+1);
        printf("Nome: ");
        scanf("%29[^\n]", funcionario[i].nome);
        getchar();
        printf("Cargo: ");
        scanf("%29[^\n]", funcionario[i].cargo);
        getchar();
        printf("Rua: ");
        scanf("%29[^\n]", funcionario[i].endereco.rua);
        getchar();
        printf("Numero: ");
        scanf("%d", &funcionario[i].endereco.numero);
        getchar();
        printf("Cidade: ");
        scanf("%29[^\n]", funcionario[i].endereco.cidade);
        getchar();
    }

    printf("\n------------ DADOS FUNCIONÁRIOS ------------");
    
    for (int i = 0; i < 2; i++){
        printf("\nFuncionário: %s\n", funcionario[i].nome);
        printf("Cargo: %s\n", funcionario[i].cargo);
        printf("Endereço: %s, %d - %s\n", funcionario[i].endereco.rua,funcionario[i].endereco.numero,funcionario[i].endereco.cidade);
    }

    return 0;
}