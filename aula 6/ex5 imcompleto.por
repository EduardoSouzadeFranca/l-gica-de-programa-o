programa {
  
  funcao inteiro verificar(inteiro a,inteiro b,inteiro c,inteiro d){
    
    
    inteiro numero
    escreva("Digite um número: ")
      leia(numero)
    
    se (numero == 0){
      retorne verificar(a,b,c,d) 
    }
    
    se (numero % 2 == 0){ 
      a = a + 1
    }
    senao {
      b = b + 1
    } 

    se(numero > 0){
      c = c + 1 
    } 
    senao{
      d = d + 1
    }

    inteiro resultado = verificar(a,b,c,d)
    retorne verificar(a,b,c,d)
  }
  
  
  
  funcao inicio() {
    
    inteiro par 
    inteiro impar 
    inteiro positivo
    inteiro negativo 
    
    verificar(par,impar,positivo,negativo)
 
    escreva("Quantidade de pares: ",par,"\n") 
    escreva("Quantidade de ímpares: ",impar,"\n") 
    escreva("Quantidade de positivos: ",positivo,"\n") 
    escreva("Quantidade de negativos: ",negativo)


  }
}
