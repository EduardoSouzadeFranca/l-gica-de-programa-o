programa {
  
  funcao soma(inteiro numeros[][], inteiro linha, inteiro coluna){
    inteiro soma = 0
    
    para (inteiro i = 0; i < linha; i++){ 
      para (inteiro j = 0; j < coluna; j++){
        soma += numeros[i][j]
      }  
      escreva("Soma da linha ",i,": ",soma,"\n") 
      soma = 0
    }
    
    escreva("\n")
    
    para (inteiro j = 0; j < coluna; j++){ 
      para (inteiro i = 0; i < linha; i++){
        soma += numeros[i][j]
      }  
      escreva("Soma da coluna ",j,": ",soma,"\n") 
      soma = 0
    }

  }
  
  funcao inicio() {
    
    inteiro numeros[3][3]

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        escreva("Digite o valor da posição",'[',i,']','[',j,']',": ")
        leia(numeros[i][j])
      }
    }
    escreva("\n")
    soma(numeros, 3, 3)

  }
}