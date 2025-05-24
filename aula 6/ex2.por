programa {
  
  funcao vazio contagem(inteiro a,inteiro b){
     
    se(a < b){
      retorne
    }
    escreva(a," ")
    contagem(a - 1, b)
  
  }
  
  funcao inicio() {
    
    inteiro n
     
    escreva("Informe o valor de N: ")
    leia(n)
    escreva("Números de 1 até ",n,": ")
    contagem(n, 1)
  
  }
}

  
      
   

 

