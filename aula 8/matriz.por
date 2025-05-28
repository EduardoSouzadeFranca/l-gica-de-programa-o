programa {
  
  
  funcao inicio() { 
    
    inteiro numeros[3][3]
    
    numeros[0][0] = 1
    numeros[0][1] = 2
    numeros[1][0] = 3
    numeros[1][1] = 4 

    /*   0  1  2
       0 [1][2][]
       1 [3][4][] 
       2 [] [] []
    */

    para (inteiro i = 0; i<3; i++){
      para (inteiro j = 0; j<3; j++){
        inteiro numero 
        escreva("digite um numero: ") 
        leia(numero) 
        numeros[i][j] = numero
      }
    } 

    para (inteiro i = 0; i<3; i++){
      para (inteiro j = 0; j<3; j++){ 
        escreva(numeros[i][j],' ') 
      }
      escreva("\n")
    }


  }
}
