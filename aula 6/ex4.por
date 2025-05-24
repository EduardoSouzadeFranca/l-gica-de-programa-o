programa {
  
  funcao inteiro contagem(inteiro a, inteiro b, inteiro contador){
    
    se(a <= 0 ou b <= 0){
      retorne 0
    } 
    se(contador < b){
      retorne a + contagem(a,b,contador+1)
    } 
    senao{
      retorne a
    }
  
  }
  
  funcao inicio() {
    
    inteiro a
    inteiro b
     
    escreva("Informe o valor de a: ")
    leia(a)
    
    escreva("Informe o valor de b: ")
    leia(b)
    
    escreva("O produto é ")
    escreva(contagem(a,b,1))

  }
}

  
      
   

 

