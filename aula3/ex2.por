programa {
  funcao inicio() {
    
    inteiro idade
    leia(idade)

    se (idade >= 65){
      escreva ("Você é um idoso")
    }
    senao se (idade >= 18 e idade < 65){
      escreva("Você é um adulto")
    }
     senao se (idade >= 13 e idade < 18){
      escreva("Você é um adolescente")
     }
     senao se(idade >= 0 e idade < 13){
      escreva("Você é uma criança")
     }
     senao {
      escreva("Idade Inválida")
     }
     

  
  }
}
