#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#define MAX_CONTAS 100

int totalcontas = 0;
int ids = 1000;


typedef struct {
    int numero;       
    char nome[50];   
    float saldo;    
} Conta;

int mostrarmenu(int opcao);
int contaexiste(Conta contas[], int numero);

void exibirContas(Conta contas[]);
void depositar(Conta contas[]);
void sacar(Conta contas[]);
void buscarConta(Conta contas[]);
void transferir(Conta contas[]);
void deletar(Conta contas[]);
void editar(Conta contas[]);

int main(){
    
    Conta contas[MAX_CONTAS];
    
    int opcao = -1;
    mostrarmenu(opcao);
    return 0;
}

int mostrarmenu(int opcao){

    Conta contas[];
    
    getchar();


    printf("===== SISTEMA BANCÁRIO =====\n");
    printf("0 - Sair\n");
    printf("1 - Criar Conta\n");
    printf("2 - Exibir Contas\n");
    printf("3 - Depositar\n");
    printf("4 - Sacar\n");
    printf("5 - Buscar Conta\n");
    printf("6 - Transferir\n");
    printf("7 - Deletar Conta\n");
    printf("8 - Editar Conta\n");
    printf("===========================\n");

    
    
    while ("%d" && opcao != 0){

        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                criarConta(contas);
                return 1;
                break;
            case 2:
                exibirContas(contas); 
                return 2;
                break;
            case 3: 
                depositar(contas);
                return 3;
                break;
            case 4: 
                sacar(contas);
                return 4;
                break;
            case 5: 
                buscarConta(contas); 
                return 5;
                break;
        } 

        if (opcao == 0) {
          printf("Saindo do Sistema...");
          return 0;
        } 
        else if (opcao < 0 || opcao > 7 ){
          printf("Opção Invalida. Tente Novamente\n");
        }
    }
    return 0;
}

int contaexiste(Conta contas[], int numero){
    for (int i = 0; i < totalcontas; i++) {
        if (contas[i].numero == numero) {
            return i;
        }
    }
    return -1;
}


void criarConta(Conta contas[]) {
    
    printf("Digite o seu nome: ");
    scanf("%49[^\n]",contas[totalcontas].nome);
    contas[totalcontas].numero = ids;
    contas[totalcontas].saldo = 0.0;
    
    printf("Olá %s! Sua conta foi criada com sucesso!\n", contas[totalcontas].nome);

    printf("\n--- dados ---\n");
    printf("");
    printf("");
    
    totalcontas++;
    ids++;
} 

void exibirContas(Conta contas[]) {
    if (totalcontas == 0) {
        printf("nenhuma conta cadastrada");
        return;
    }
} 

void depositar(Conta contas[]) {
    printf("opção depositar selecionada.\n.");
} 

void sacar(Conta contas[]) {
    printf("opção sacar selecionada.\n");
} 

void buscarConta(Conta contas[]) {
    int numero;
}
  
