programa {
  
  funcao verificar(inteiro pares,inteiro impares,inteiro postivo,inteiro negativo){
    
    
    inteiro numero
    escreva("Digite um número: ")
      leia(numero)
    
    se (numero == 0){
      escreva("Quantidade de pares: ",pares,"\n") 
      escreva("Quantidade de ímpares: ",impares,"\n") 
      escreva("Quantidade de positivos: ",postivo,"\n") 
      escreva("Quantidade de negativos: ",negativo)
     
    }
    
    se (numero % 2 == 0 e numero > 0){ 
       verificar(pares+1,impares,postivo+1,negativo)
    }
    
    senao se (numero % 2 != 0 e numero > 0) {
       verificar(pares,impares+1,postivo+1,negativo)
    } 
    
     senao se (numero % 2 == 0 e numero < 0) {
      verificar(pares+1,impares,postivo,negativo+1)
    } 
    
     senao se (numero % 2 != 0 e numero < 0) {
      verificar(pares,impares+1,postivo,negativo+1)
    } 
  }
  
  funcao inicio() {
    
    inteiro par = 0
    inteiro impar = 0
    inteiro positivo = 0
    inteiro negativo = 0
    
    verificar(par,impar,positivo,negativo)
 

  }
}
