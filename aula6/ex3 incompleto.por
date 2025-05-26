programa {
  
  funcao comparar(inteiro numeros[], inteiro tamanho){

    inteiro maior, menor
    
    para (inteiro i = 0; i < tamanho; i++){
     
     se (numeros[i] < numeros[i-1] e i > 0 e numeros[i] < menor){
      menor = numeros[i]   
     } 
     
     senao se (i == 0){
       menor = numeros[i]
     }
    
     se (numeros[i] > numeros[i-1] e i > 0 e numeros[i] > maior){
      maior = numeros[i]   
     }
     
     senao se (i == 0){
       maior = numeros[i]
     }

    }
      escreva("O menor valor é: ",menor,"\n")
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
