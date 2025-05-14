programa {
  funcao inicio() {
    inteiro n, soma = 0

    escreva("Digite o valor final: ")
    leia(n)

    para(inteiro contador = 1; contador <= n; contador++){

      se(contador % 2 == 0){
        
        soma = soma + contador
      }

    }  
      
    escreva("A soma dos números pares de 1 até ",n, " é: ",soma)
  
  
  }
}
