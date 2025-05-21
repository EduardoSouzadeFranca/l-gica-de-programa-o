programa {
 
    funcao inteiro soma(inteiro x, inteiro y){ 
      inteiro resultado = x + y
      escreva("resultado da soma: ",resultado)
      retorne resultado  
    } 
    
    funcao inteiro subtracao(inteiro x, inteiro y){
     inteiro resultado = x - y
      escreva("resultado da Subtração: ",resultado)
      retorne resultado 
    }  
   
   funcao inteiro multiplicacao(inteiro x, inteiro y){
      inteiro resultado = x * y
       escreva("resultado da Multiplicação: ",resultado)
       retorne resultado
    } 

    funcao inteiro divisao(inteiro x, inteiro y){
       inteiro resultado = x / y
        escreva("resultado da Divisão: ",resultado)
        retorne resultado
    } 


  funcao inicio() {
    
    inteiro numero1 
    escreva("Digite o primeiro número: ")
    leia(numero1)
  
    inteiro numero2
    escreva("Digite o segundo número: ") 
    leia(numero2) 

    inteiro operacao
 
    escreva("\n1 - Soma\n") 
    escreva("2 - Subtração\n") 
    escreva("3 - Multiplicação\n") 
    escreva("4 - Divisão\n") 
    escreva("Escolha a operação: ")
    leia(operacao) 

    escolha(operacao){
      caso 1: operacao == 1 
      escreva("opção: soma\n")
      soma(numero1,numero2)
      pare
    
      caso 2: operacao == 2 
      escreva("opção: subtração\n")
      subtracao(numero1,numero2)
      pare
   
      caso 3: operacao == 3 
      escreva("opção: multiplicação\n")
      multiplicacao(numero1,numero2)
      pare
     
      caso 4: operacao == 4 
      escreva("opção: divisão\n")
      divisao(numero1,numero2)
      pare
    
      caso 5: operacao <= 0 ou operacao > 4
      escreva("opção inválida\n")
      pare
    }

  
 
 
  
  
  

  
  }
}
