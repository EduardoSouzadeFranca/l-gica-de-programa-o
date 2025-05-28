programa {
  funcao inicio() {
    
    inteiro numeros[10]
    
    para(inteiro i = 0; i < 10; i++){
      escreva("Digite o ",i+1,"º numero (entre 1 e 9): ")
      leia(numeros[i])
      
      se (numeros[i] <= 0 ou numeros[i] > 9){
        escreva("Valor invalido, tente novamente.\n\n")
        i--
      }

    } 
    inteiro frequencia[10] = {0,0,0,0,0,0,0,0,0,0}
    inteiro maisfrequente = 0

    para(inteiro i = 0; i < 10; i++){
      frequencia[numeros[i]] += 1 
    } 

    para(inteiro i = 0; i < 10; i++){
      se (frequencia[i] > maisfrequente){
        maisfrequente = i
      } 
    } 
    escreva("\nO numero que mais se repete é: ",maisfrequente)
  }
}
