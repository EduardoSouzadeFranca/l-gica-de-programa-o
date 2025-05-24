programa {
  
  funcao inteiro contagem(inteiro a){
     
    se(a <= 0){
      retorne 0
    } 
    se(a == 1){
      retorne 1
    } 
    senao{
      retorne a + contagem(a-1)
    }
  
  }
  
  funcao inicio() {
    
    inteiro n
     
    escreva("Informe o valor de N: ")
    leia(n)
    escreva("A soma dos ",n," primeiros naturais é ")
    escreva(contagem(n))

  }
}

  
      
   

 

