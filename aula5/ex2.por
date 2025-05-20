programa {
  
  funcao vazio dados(cadeia x, inteiro y){ 

    escreva("Olá, ",x,", você tem ",y," anos. Seja bem-vindo(a)!") 

  }
  
  funcao inicio() { 

    cadeia nome 
    escreva("Digite seu nome: ")
    leia(nome)

    inteiro idade 
    escreva("Digite sua idade: ")
    leia(idade) 

    dados(nome, idade)
    
  }
}
