programa {
  
  funcao contar(inteiro numeros[], inteiro tamanho){

     escreva("\nValores na ordem inversa:\n")
    
    /* para (inteiro i = 0; i < tamanho; i++){
      inteiro inverso = tamanho-1 - i
      escreva(numeros[inverso],"\n")
    } */

    para (inteiro i = tamanho - 1; i >= 0; i--){
      escreva(numeros[i],"\n")
    }

  }
  
  funcao inicio() {
    
    inteiro numeros[5]

    para (inteiro i = 0; i < 5; i++){
      escreva("Digite o valor ",i+1,": ")
      leia(numeros[i])
    }

    contar(numeros,5)

  }
}
