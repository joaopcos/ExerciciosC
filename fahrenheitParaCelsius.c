#include <stdio.h>

int main(void) {
  float fa, ce;

  printf("Entre com a temperatura em farenheit:\n");
  scanf("%f", &fa);
  
  ce = (fa - 32) * 5 / 9;

  printf("Sua temperatura em celsius: %f", ce);
  return 0;
}