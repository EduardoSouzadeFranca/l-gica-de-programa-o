programa {
  funcao inicio() {
    inteiro opcao

    escreva("===== SISTEMA BANCÁRIO =====\n")
    escreva("0 - Sair\n")
    escreva("1 - Criar Conta\n")
    escreva("2 - Exibir Contas\n")
    escreva("3 - Depositar\n")
    escreva("4 - Sacar\n")
    escreva("5 - Buscar Conta\n")
    escreva("===========================\n")
    
      enquanto (opcao !=0) { 
        escreva("\nEscolha uma opção: ")
        leia(opcao)

        escolha (opcao){
        caso 1:opcao == 1
        escreva("Opção Criar Conta selecionada.\n")
         pare
        caso 2:opcao == 2 
        escreva("Opção Exibir Contas selecionada.\n") 
         pare
        caso 3:opcao == 3
        escreva("Opção Depositar selecionada.\n") 
         pare
        caso 4:opcao == 4 
        escreva("Opção Sacar selecionada.\n") 
         pare 
        caso 5:opcao == 5
        escreva("Opção Buscar Conta selecionada.\n") 
         pare
        } 

        se (opcao == 0) {
          escreva("Saindo do sistema...")
        } 
        senao se (opcao < 0 ou opcao > 5 ){
          escreva("Opção inválida. Tente novamente.\n")
        }
      }
    
  }
}
