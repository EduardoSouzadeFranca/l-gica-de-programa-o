programa {
  inclua biblioteca Util --> u
  funcao inteiro MostrarMenu(inteiro opcao){

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
          limpa()
          criarConta()
           retorne 1
            pare
        
        caso 2:opcao == 2 
          limpa()
          exibirContas() 
           retorne 2
           pare
        
        caso 3:opcao == 3
          limpa()
          depositar()
           retorne 3
           pare
       
        caso 4:opcao == 4 
          limpa()
          sacar()
            retorne 4
            pare 
       
        caso 5:opcao == 5
          limpa()
          buscarConta() 
            retorne 5
            pare
        } 
        
        se (opcao == 0) {
          escreva("Saindo do sistema...") 
          retorne 0
        } 
        senao se (opcao < 0 ou opcao > 5 ){
          escreva("Opção inválida. Tente novamente.\n")

        }
      }
  }
  
  funcao vazio criarConta() {
    u.aguarde(800)
    escreva("Opção Criar Conta selecionada.")
  } 

  funcao vazio exibirContas() {
    u.aguarde(800)
    escreva("Opção Exibir Contas selecionada.")
  } 

   funcao vazio depositar() {
    u.aguarde(800)
    escreva("Opção Depositar selecionada.")
  } 

   funcao vazio sacar() {
    u.aguarde(800)
    escreva("Opção Sacar selecionada.")
  } 

   funcao vazio buscarConta() {
    u.aguarde(800)
    escreva("Opção Criar Conta selecionada.")
  }
  
  funcao inicio() {
    
    inteiro opcao
    opcao = MostrarMenu(opcao)
    
  }
}