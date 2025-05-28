programa {
  
  funcao comparar(inteiro numeros[], inteiro tamanho){

    inteiro maior = 0, menor = 100
    
    para (inteiro i = 0; i < tamanho; i++){
     
     se (i == 0){
       menor = numeros[i]
      }
     
     se (numeros[i] > maior){
      maior = numeros[i]   
      } 
     
     se (numeros[i] < maior){
      menor = numeros[i]   
      }
     
    }
      escreva("\nO menor valor é: ",menor,"\n")
      escreva("O maior valor é: ",maior)
  }
  
  funcao inicio() {
    
    inteiro numeros[5]

    para (inteiro i = 0; i < 5; i++){
      escreva("Digite o valor ",i+1,": ")
      leia(numeros[i])
    }

    comparar(numeros,5)

  }
}