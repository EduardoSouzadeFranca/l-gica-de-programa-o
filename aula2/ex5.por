programa {
  funcao inicio() {
    inteiro produto = 1500
     
    escreva ("Escreva o valor do produto: ",produto,"\n")

     real desconto = produto*0.9 
     real parcela3x = produto/3
     real comissao_a_vista = desconto*0.05
     real comissao_parcelado = produto*0.05

     escreva ("Valor com 10% de desconto: ","R$ ",desconto,"\n")
     escreva ("Valor de cada parcela (3x sem juros): ","R$ ",parcela3x,"\n")
     escreva ("Comissão do vendendor (à vista): ","R$ ",comissao_a_vista,"\n")
     escreva ("Comissão do vendendor (parcelado): ","R$ ",comissao_parcelado,"\n")
  }
}
