programa {
  funcao inicio() {
    inteiro acimaDaMedia = 0
    real nota1, nota2, nota3, media

    escreva("Nota 1: ")
    leia(nota1)
    
    escreva("Nota 2: ")
    leia(nota2)

    escreva("Nota 3: ")
    leia(nota3)

    media = (nota1 + nota2 + nota3) / 3
    escreva("A média das notas é: ", media,"\n")


    se (nota1 >= media){
      acimaDaMedia++
    }
    se (nota2 >= media){
      acimaDaMedia++
    }
    se (nota3 >= media){
      acimaDaMedia++
    }
    escreva("Quantas notas estão acima da média: ",acimaDaMedia)
  }
}
