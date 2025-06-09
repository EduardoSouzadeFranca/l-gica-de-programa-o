#include <stdio.h>


typedef struct {
    int numero;       
    char nome[50];   
    float saldo;    
} Conta;

#define MAX_CONTAS 100
Conta contas[MAX_CONTAS];
int totalContas = 0;

void criarConta() {
    printf("Create Account option selected.\n");
    printf("Digite o seu nome: ");
    scanf("%49[^\n]",conta[0].nome);
    conta[0].saldo = 0;
} 

void exibirContas() {
    printf("View Accounts option selected.");
} 

void depositar() {
    printf("Deposit option selected.");
} 

void sacar() {
    printf("Withdraw option selected.");
} 

void buscarConta() {
    printf("Create Account option selected.");
}
  
int mostrarmenu(int option){

    printf("===== BANKING SYSTEM =====\n");
    printf("0 - Exit\n");
    printf("1 - Create Account\n");
    printf("2 - View Accounts\n");
    printf("3 - Deposit\n");
    printf("4 - Withdraw\n");
    printf("5 - Search Account\n");
    printf("===========================\n");

    while ("%d" && option != 0){

        printf("\nChoose an option: ");
        scanf("%d", &option);

        switch (option){
            case 1:
                criarConta();
                return 1;
                break;
            case 2:
                exibirContas(); 
                return 2;
                break;
            case 3: 
                depositar();
                return 3;
                break;
            case 4: 
                sacar();
                return 4;
                break;
            case 5: 
                buscarConta(); 
                return 5;
                break;
        } 

        if (option == 0) {
          printf("Exiting the system...");
          return 0;
        } 
        else if (option < 0 || option > 5 ){
          printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}

int main(){

    int option = -1;
    mostrarmenu(option);
    return 0;
}
