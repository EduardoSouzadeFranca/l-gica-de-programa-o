programa {
  funcao inicio() {
    
    inteiro positivo = 0, negativo = 0
    
    enquanto(verdadeiro){
      inteiro numero
      leia(numero)
      
      se (numero == 0) {
        pare
      }
       
      se (numero >= 0){
        positivo++
      }
      senao se(numero < 0){
        negativo++
      }
    }
      escreva("Quantidade de números positivos: ",positivo)
      escreva("\nQuantidade de números negativos: ",negativo)

    
    
  }
}
