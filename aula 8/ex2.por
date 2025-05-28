programa {
  
  funcao comparar(inteiro numeros[][], inteiro linha, inteiro coluna){

    inteiro maior = 0, menor = 100
    
    para (inteiro i = 0; i < linha; i++){
     para (inteiro j = 0; j < coluna; j++){

      se (i == 0 e j == 0){
        menor = numeros[i][j]
      }

      se (numeros[i][j] > maior){
        maior = numeros[i][j]
      }

      se (numeros[i][j] < maior){
        menor = numeros[i][j]
      }
    } 
  }
      escreva("\nO menor valor é: ",menor,"\n")
      escreva("O maior valor é: ",maior)
  }
  
  funcao inicio() {
    
    inteiro numeros[3][3]

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        escreva("Digite o valor da posição",'[',i,']','[',j,']',": ")
        leia(numeros[i][j])
      }
    }

    comparar(numeros, 3, 3)

  }
}