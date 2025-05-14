programa {
  funcao inicio() {
    inteiro qtdnumeros , qtdpares = 0, qtdimpares = 0, soma = 0

    escreva("Quantos números você quer digitar ? ")
    leia(qtdnumeros)

    para(inteiro contador = 0; contador < qtdnumeros; contador++){
     inteiro numero 

     escreva("Digite um número: ")
     leia(numero)
    
     soma = soma + numero
    
      se (numero % 2 == 0){ 
     qtdpares++
      }
      senao{
        qtdimpares++
      }

    }

    escreva("Pares: ",qtdpares,"\n")
    escreva("Impares: ",qtdimpares,"\n")
    escreva("A soma dos numeros é: ",soma)
      
  }
}
