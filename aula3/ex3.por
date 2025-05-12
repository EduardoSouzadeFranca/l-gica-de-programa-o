programa {
  funcao inicio() {
    
    real primeiro 
    escreva("Digite o primeiro número: ")
    leia(primeiro)

    real segundo 
    escreva("Digite o segundo número: ")
    leia(segundo)
    
    real calculo
    
    escreva("\n--- Operações ---")
    escreva("\n1 - soma")
    escreva("\n2 - subtração")
    escreva("\n3 - multiplicação")
    escreva("\n4 - divisão")
    escreva("\n-----------------\n")
    escreva("\nEscolha uma operação: ")
    leia(calculo)
  
  escolha (calculo) {
    caso 1: 
      real calculo = primeiro + segundo
      escreva("Resultado da Soma: ",calculo)
      pare 
    caso 2: 
      real calculo = primeiro - segundo
      escreva("Resultado da Subtração: ",calculo)
      pare
    caso 3: 
      real calculo = primeiro * segundo
      escreva("Resultado da Multiplicação: ",calculo)
      pare
    caso 4: 
      se (segundo == 0) {
        escreva("Divisão Invalida")
      }
      senao {
        real calculo = primeiro / segundo
        escreva("Resultado da Divisão: ",calculo)
      } 
     pare
   }
  }
}
