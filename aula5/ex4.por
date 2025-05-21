programa {
  
  funcao vazio ehbissexto(inteiro x){

    se (x % 4 == 0 e x % 100 != 0 ou x % 400 == 0){
      escreva(x," é um ano bissexto.")
    } 
    
    senao {
      escreva(x," não é um ano bissexto.")
    }

  }
  
  funcao inicio() { 

    inteiro ano 
    escreva("Digite um ano: ")
    leia(ano) 

    ehbissexto(ano) 
    
  }
}
