#include <stdio.h>
#include <math.h>

int main(void) {
  float peso, altura, imc;

  printf("Entre com o seu peso (kg):\n");
  scanf("%f", &peso);

  printf("Entre com a sua altura (M)\n");
  scanf("%f", &altura);

  imc = peso/(pow(altura,2));

  printf("Seu IMC: %f", imc);
  return 0;
}