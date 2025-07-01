#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#define MAX_LIVROS 100

typedef struct {
    int codigo;
    char titulo[50];
    char autor[50];
    int ano;
    int disponivel; // 1 - Sim | 0 - Não
} Livro;

// Funções do Banco de Dados
void carregarDados(Livro livros[], int *i, int *codigoatual);
void salvarDados();

// Funções Utilitárias
int mostrarMenu();
int LivroExiste();
void carregando();

// Funções do Sistema
void cadastrarlivro(Livro livros[], int *totallivros, int *codigo);
void exibirlivros(Livro livros[], int totallivros);
void exibirlivrosdisp(Livro livros[], int totallivros);
void buscarlivroC(Livro livros[], int totallivros);
void buscarlivroT(Livro livros[], int totallivros);
void atualizarlivro(Livro livros[], int totallivros);
void excluirlivro(Livro livros[], int *totallivros, int *ids);

int main() {
    setlocale(LC_ALL, "portuguese");

    Livro livros[MAX_LIVROS];
    int ids = 3000, totallivros = 0;

    carregarDados(livros, &totallivros, &ids);

    int opcao;

    do {
        opcao = mostrarMenu();
        getchar();

        system("cls");

        switch (opcao) {
        case 0:
            salvarDados(livros, totallivros);
            printf("Saindo do sistema.");
            carregando();
            break;
        case 1:
            cadastrarlivro(livros, &totallivros, &ids);
            Sleep(5000);
            break;
        case 2:
            exibirlivros(livros, totallivros);
            Sleep(2000+1500*totallivros);
            break;
        case 3:
            exibirlivrosdisp(livros, totallivros);
            Sleep(2000+1500*totallivros);
            break;
        case 4:
            buscarlivroC(livros, totallivros);
            Sleep(5000);
            break;
        case 5:
            buscarlivroT(livros, totallivros);
            Sleep(5000);
            break;
        case 6:
            atualizarlivro(livros, totallivros);
            Sleep(5000);
            break;
        case 7:
            excluirlivro(livros, &totallivros, &ids);
            Sleep(2000);
            break;
        default:
            printf("Opção inválida. Tente novamente.");
        }
        system("cls");

    } while (opcao != 0);

    return 0;
}

// Funções do Banco de Dados
void carregarDados(Livro livros[], int *i, int *codigoatual) {
     FILE *arquivo = fopen("dados.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao ler o arquivo.\n");
        return;
    }

    while (fscanf(arquivo, "%d,%49[^,],%49[^,],%d,%d", &livros[*i].codigo, livros[*i].titulo, livros[*i].autor, &livros[*i].ano, &livros[*i].disponivel) == 5) {
        (*i)++;
    }

    if (*i > 0) {
        *codigoatual = livros[*i - 1].codigo + 1;
    }
    else {
        *codigoatual = 3000;
    }

    fclose(arquivo);
}

void salvarDados(Livro livros[], int totallivros) {
    FILE *arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao escrever o arquivo!\n");
        return;
    }

    for (int i = 0; i < totallivros; i++) {
        fprintf(arquivo, "%d,%s,%s,%d,%d\n", livros[i].codigo, livros[i].titulo, livros[i].autor, livros[i].ano, livros[i].disponivel);
    }

    fclose(arquivo);
}

// Funções Utilitárias
int mostrarMenu() {
    int opcao;
    printf("\n===== Gerenciamento de Biblioteca =====\n");
    printf("1 - Cadastrar Livro\n");
    printf("2 - Exibir Livros\n");
    printf("3 - Exibir Livros Disponiveis\n");
    printf("4 - Buscar Livro por Código\n");
    printf("5 - Buscar Livro por Título\n");
    printf("6 - Atualizar Livro\n");
    printf("7 - Excluir Livro\n");
    printf("0 - Sair\n");
    printf("============================\n\n");
    
    printf("Escolha uma op��o: ");
    scanf("%d", &opcao);
    return opcao;
}

int LivroExiste(Livro livros[], int totallivros, int numero) {
    if (totallivros == 0) {
        printf("Nenhum livro cadastrado!\n");
        return -2;
    }

    for (int i = 0; i < totallivros; i++) {
        if (livros[i].codigo == numero) {
            return i;
        }
    }

    return -1;
}

void carregando() {
    Sleep(750);
    printf(".");
    Sleep(750);
    printf(".");
    Sleep(750);
}


// Funções do Sistema
void cadastrarlivro(Livro livros[], int *totallivros, int *ids){
    if (*totallivros >= MAX_LIVROS) {
        printf("O sistema atingiu o limite de livros!");
        return;
    }

    int i = *totallivros;
    printf("--- CADASTRO ---\n");
    printf("Digite o título do livro: ");
    fgets(livros[i].titulo , 50, stdin);
    printf("Digite o nome do autor: ");
    fgets(livros[i].autor , 50, stdin);
    printf("Digite o ano de publicação: ");
    scanf("%d", &livros[i].ano);
    livros[i].titulo[strcspn(livros[i].titulo, "\n")] = '\0';
    livros[i].autor[strcspn(livros[i].autor, "\n")] = '\0';
    do {   
        printf("Esse livro está disponível? (1 - sim, 0 - não): ");
        scanf("%d", &livros[i].disponivel);
        if (livros[i].disponivel < 0 || livros[i].disponivel > 1){
            printf("\nValor Inválido");
            Sleep(700);
            system("cls");
        }
    } while (livros[i].disponivel != 0 && livros[i].disponivel != 1);
    
    livros[i].codigo = *ids;
    system("cls");
    printf("O livro foi cadastrado com sucesso!\n");
    printf("\n--- DADOS ---\n");
    printf("título: %s\n", livros[i].titulo);
    printf("Autor: %s\n", livros[i].autor);
    printf("Ano de Publicação: %d\n", livros[i].ano);
    printf("Código: %d\n", livros[i].codigo);
    printf("Está Disponível: ");

    if (livros[i].disponivel == 1){
        printf("Sim\n");
    }
    else {
        printf("Não\n");
    }

    (*ids)++;
    (*totallivros)++;

}

void exibirlivros(Livro livros[], int totallivros){
    if (totallivros == 0){
        printf("Nenhum livro cadastrado!\n");
        return;
    }

    for (int i = 0; i < totallivros; i++){
        printf("\n-- %dº Livro --\n", i+1);
        printf("título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de Publicação: %d\n", livros[i].ano);
        printf("Código: %d\n", livros[i].codigo);
        printf("Está Disponível: ");
        if (livros[i].disponivel == 1){
        printf("Sim\n\n");
        }
        else {
        printf("Não\n\n");
        }
    }
}

void exibirlivrosdisp(Livro livros[], int totallivros){
    if (totallivros == 0){
        printf("Nenhum livro cadastrado!\n");
        return;
    }

    int totaldisp;
    for (int i = 0; i < totallivros; i++){
        if (livros[i].disponivel == 1){  
        printf("\n-- %dº Livro --\n", i+1);
        printf("título: %s\n", livros[i].titulo);
        printf("Autor: %s\n", livros[i].autor);
        printf("Ano de Publicação: %d\n", livros[i].ano);
        printf("Código: %d\n", livros[i].codigo);
        printf("Está Disponível: Sim\n\n");
        totaldisp++;
        }
    }
    
    if (totaldisp<=0){
        printf("Nenhum livro disponível!\n");
    }
}

void buscarlivroC(Livro livros[], int totallivros){
    printf("Digite o código: ");
    int procurar;
    scanf("%d", &procurar);

    for (int i = 0; i < totallivros; i++){
        if (livros[i].codigo == procurar){
            printf("\n--- DADOS ---\n");
            printf("título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano de Publicação: %d\n", livros[i].ano);
            printf("Código: %d\n", livros[i].codigo);
            printf("Está Disponível: ");

            if (livros[i].disponivel == 1){
                printf("Sim\n");
            }
            else {
                printf("Não\n");
            }
            return;
        }
    }
    printf("Nenhum livro encontrado!\n");
}

void buscarlivroT(Livro livros[], int totallivros){
    printf("Digite o titulo: ");
    char pesquisa[50];
    fgets(pesquisa, 50, stdin);
    pesquisa[strcspn(pesquisa, "\n")] = '\0';
    
    for (int i = 0; i < totallivros; i++){
        int comparar = strcmp(livros[i].titulo, pesquisa);
        
        if (comparar == 0){
            printf("\n--- DADOS ---\n");
            printf("título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano de Publicação: %d\n", livros[i].ano);
            printf("Código: %d\n", livros[i].codigo);
            printf("Está Disponível: ");

            if (livros[i].disponivel == 1){
                printf("Sim\n");
            }
            else {
                printf("Não\n");
            }
            return;
        }
    }
    printf("Nenhum livro encontrado!\n");
}

void atualizarlivro(Livro livros[], int totallivros){
    int numero;
    printf("Informe o código do livro: ");
    scanf("%d", &numero);

    int indice = LivroExiste(livros, totallivros, numero);

    if (indice == -2) {
        return;
    }
    
    printf("Buscando livro.");
    carregando();

    if (indice == -1) {
        printf("\nlivro não encontrado!");
        return;
    }
    
    if (indice >= 0) {
        getchar();
        system("cls");
        
        printf("título do livro: %s\n",livros[indice].titulo);
        printf("Digite o novo título do livro: ");
        fgets(livros[indice].titulo, 50, stdin);
        livros[indice].titulo[strcspn(livros[indice].titulo, "\n")] = '\0';
        system("cls");
        
        printf("\nNome do autor: %s\n",livros[indice].autor);
        printf("Digite o novo nome do autor: ");
        fgets(livros[indice].autor, 50, stdin);
        livros[indice].autor[strcspn(livros[indice].autor, "\n")] = '\0';
        system("cls");
       
        printf("\nano de publicação do livro: %d\n",livros[indice].ano);
        printf("Digite o novo ano de publicação: ");
        scanf("%d", &livros[indice].ano);
        system("cls");
        
        do {   
            printf("Esse livro está disponível? (1 - sim, 0 - não): ");
            scanf("%d", &livros[indice].disponivel);
            if (livros[indice].disponivel < 0 || livros[indice].disponivel > 1){
                printf("\nValor Inválido");
                Sleep(700);
            }
            system("cls");
        } while (livros[indice].disponivel != 0 && livros[indice].disponivel != 1);
    
        printf("\n--- DADOS ATUALIZADOS ---\n");
        printf("título: %s\n", livros[indice].titulo);
        printf("Autor: %s\n", livros[indice].autor);
        printf("Ano de Publicação: %d\n", livros[indice].ano);
        printf("Código: %d\n", livros[indice].codigo);
        printf("Está Disponível: ");

        if (livros[indice].disponivel == 1){
            printf("Sim\n");
        }
        else {
            printf("Não\n");
        }
    }
}

void excluirlivro(Livro livros[], int *totallivros, int *ids){
    int numero;
    printf("\nInforme o número da conta: ");
    scanf("%d", &numero);

    int indice = LivroExiste(livros, *totallivros, numero);

    if (indice == -1) {
        printf("Livro não encontrado.\n");
        return;
    }
    if (indice == -2) {
        return;
    }
    
    if (indice >= 0){
        for (int i = indice; i < (*totallivros) - 1; i++) {
            strcpy(livros[i].titulo, livros[i + 1].titulo);
            strcpy(livros[i].autor, livros[i + 1].autor);
            livros[i].ano = livros[i + 1].ano;
            livros[i].codigo = livros[i + 1].codigo-1;
            livros[i].disponivel = livros[i + 1].disponivel;
        }

        printf("Livro excluído com sucesso!\n");
    
        strcpy(livros[*totallivros - 1].titulo, "");
        strcpy(livros[*totallivros - 1].autor, "");
        livros[*totallivros - 1].ano = 0;
        livros[*totallivros - 1].codigo = 0;
        livros[*totallivros - 1].disponivel = -1;

        (*totallivros)--;
        (*ids)--;
    }
}