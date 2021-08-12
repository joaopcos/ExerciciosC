#include <stdio.h>
#include <math.h>

int main(void) {

  //variaveis
  int a,b,total;
  //estrutura de repeticao(se a variavel a for menor que zero o codigo fecha)
  while(a >= 0){
    //armazenamento das variaveis
    printf("Entre com o valor de a e b:\n");
    scanf("%d %d", &a, &b);
    //calculo da portencia
    total = pow(a, b);
    printf("O resultado da potencia: %d\n", total);
    
  }
    return 0;
  }