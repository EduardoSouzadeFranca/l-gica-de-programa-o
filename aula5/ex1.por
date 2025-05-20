programa {
  
  funcao real CalcularAreaRtangulo(real a, real b){

    retorne a*b

  }
  
  funcao inicio() {

    real base
    escreva("Digite a base do retângulo: ")
    leia(base) 

    real altura
    escreva("Digite a altura do retângulo: ")
    leia(altura) 

    real resultado = CalcularAreaRtangulo(base, altura)
    escreva("Área do retângulo: ",resultado)
    
  }
}
