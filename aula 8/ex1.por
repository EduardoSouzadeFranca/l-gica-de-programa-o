programa {
  
  funcao soma(inteiro numeros[][], inteiro linha, inteiro coluna){
    inteiro soma = 0
    
    para (inteiro i = 0; i < linha; i++){ 
      para (inteiro j = 0; j < coluna; j++){
        soma += numeros[i][j]
      }  
    }

    escreva("A soma de todos os valores é: ", soma)
  }
  
  funcao inicio() {
    
    inteiro numeros[3][3]

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        escreva("Digite o valor da posição",'[',i,']','[',j,']',": ")
        leia(numeros[i][j])
      }
    }

    soma(numeros, 3, 3)

  }
}