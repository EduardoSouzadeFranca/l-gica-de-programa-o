programa {
  funcao inicio() {
    
    cadeia nome = "João Silva"
    escreva("Qual é seu nome?: ",nome,"\n")
     
    real n1 = 7.5, n2 = 6.5
    escreva("Qual foi sua primeira nota?: ",n1,"\n", "Qual foi sua segunda nota?: ",n2,"\n")

    inteiro resultado = n1 % n2 
    inteiro media = (n1+n2)/2

   escreva("O aluno ",nome," obteve média final ",media)
  }
}
