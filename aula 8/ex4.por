programa {
  funcao inicio() {
    
    inteiro numero
    inteiro valores[3][3]
    logico encontrado = falso
    
    escreva("Digite o número a ser procurado: ")
    leia(numero)

    para(inteiro i = 0;i < 3; i++){
      para(inteiro j = 0;j < 3; j++){

        escreva("Digite o valor da posição [",i,"][",j,"]: ")
        leia(valores[i][j])
        
        se (valores[i][j] == numero){
          encontrado = verdadeiro         
        }
      }
    }

    se (encontrado == verdadeiro){
      escreva("\nO número ",numero," foi encontrado")
    }      
    senao{
      escreva("\nO número ",numero," não foi encontrado")
    }

  }
}
