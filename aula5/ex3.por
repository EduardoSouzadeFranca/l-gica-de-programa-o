programa {
  
  funcao vazio aprovado(real x,inteiro y){

   se (x >= 9.5 e y < 10){
    escreva("APROVADO COM LOUVOR") 
   } 
   senao se (x >= 7 e y < 10){
    escreva("APROVADO") 
   }
   senao{
    escreva("REPROVADO") 
   } 
 }
  
  funcao inicio() { 

    real mediafinal
    leia(mediafinal)

    inteiro faltas
    leia(faltas) 

     aprovado(mediafinal, faltas)
  }
}
