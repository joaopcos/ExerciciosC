#include <stdio.h>

int main(){

int valor, i;
do{
  printf("Insira o valor para verificar seus divisores:\n");
  scanf("%d", &valor);

for(i = 1; i <= valor; i++){
  if (valor%i==0){
    printf("E divisor %d: \n", i);

      }
    }
  }while (valor > 0);
  printf("Voce terminou o programa!");
 return 0;
}