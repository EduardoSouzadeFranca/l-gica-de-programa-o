programa {
  funcao inicio() {
    real peso
    escreva("Peso (kg): ")
    leia(peso)

    real altura
    escreva("Altura (m): ")
    leia(altura)
  
    real imc = (peso / altura*altura)
    escreva("\nSeu imc é: ",imc,"\n")

    se (imc > 0  e imc <= 18.5){
      escreva("Você está abaixo do peso.")
    }
    senao se (imc > 18.5 e imc <= 24.9){
      escreva("Você tem peso normal.")
    }
    senao se (imc > 24.9 e imc <= 29.9){
      escreva("Você está acima do peso.")
    }
    senao se (imc > 29.9 e imc <= 34.9){
      escreva("Você tem obesidade grau 1.")
    }
    senao se (imc > 39.9 e imc <= 39.9){
      escreva("Você tem obesidade grau 2.")
    }
    senao se (imc >= 40){
      escreva("Você tem obesidade grau 3.")
    }

    
  }
}
