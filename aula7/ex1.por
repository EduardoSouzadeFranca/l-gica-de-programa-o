programa {
  
  funcao soma(inteiro numeros[], inteiro tamanho){

    para (inteiro i = 0; i < tamanho-1; i++){
      numeros[i+1] += numeros[i]
    }
     
    escreva("A soma de todos os valores é: ",numeros[9])
  }
  
  funcao inicio() {
    
    inteiro numeros[10]

    para (inteiro i = 0; i < 10; i++){
      escreva("Digite o valor ",i+1,": ")
      leia(numeros[i])
    }

    soma(numeros,10)

  }
}
