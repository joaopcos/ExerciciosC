#include <stdio.h>

int main(void) {
  //variaveis
  int a, b;
  //armazenamento das variaveis
  printf("Informe o número A:\n");
  scanf("%d", &a);

  printf("Informe o número B\n");
  scanf("%d", &b);

  //condicoes das respostas
  if(a > b){

    printf("O número A (%d) é o maior número", a);
  }else if(b > a){

    printf("O número B (%d) é o maior número", b);
  }else if(a == b){

    printf("O número A (%d) e o número B (%d) são iguais", a, b);
  }

  return 0;
}