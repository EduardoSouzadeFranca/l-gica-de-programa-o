programa {
  funcao inicio() {
    
    real notas[10], soma = 0, media
    real notasacima[10] = {0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0}
    inteiro qtdacima = 0

    para(inteiro i = 0; i < 10; i++){
      escreva("Digite a nota do aluno ",i+1,": ")
      leia(notas[i])
      
      se (notas[i] < 0 ou notas[i] > 10){
        escreva("Tente novamente.\n")
        i--
      }
      senao{
        soma += notas[i]
      }
    }

    media = soma/10
    escreva("\nMédia das notas: ",media,"\n")
    
    para(inteiro i = 0; i < 10; i++){
      se (notas[i] >= media){
        qtdacima++
        notasacima[i] = notas[i]
      }
    }
      
    escreva("Quantidade de notas acima da média: ",qtdacima,"\n")
    escreva("Notas acima da média:\n")

    para(inteiro i = 0; i < 10; i++){
      se (notasacima[i] > 0){
        escreva("- ",notasacima[i],"\n")
      }
    }

  }
}
