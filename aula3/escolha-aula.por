programa {
  funcao inicio() {
    inteiro opcao

    escreva("-------- MENU --------","\n")
    escreva("1 - Adicionar Livro\n")
    escreva("2 - Remover Livro\n")
    escreva("3 - Listar Livro\n")
    escreva("4 - Buscar Livro\n")

    escreva("\nEscolha uma opção: ")
    leia(opcao)

    escolha (opcao) {
      caso 1: 
      escreva("Adicionando livro...")
      pare
      caso 2: 
      escreva("Removendo livro...")
      pare
      caso 3: 
      escreva("Listando livro...")
      pare
      caso 4: 
      escreva("Buscando livro...")
      pare
      caso contrario:
      escreva("Caso Invalido, tente novamente")

    }
      

    

  }
}
