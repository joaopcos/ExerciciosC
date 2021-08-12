#include <stdio.h>

int main(void) {
  float altura=0, media=0, media1=0;
  int idade=1, cont=0;

  while (idade > 0){

     printf("Entre com a idade:\n");
     scanf ("%d", &idade);

     printf("Entre com a altura:\n");
     scanf ("%f", &altura);

     if (idade > 50){
      cont++;
      media1 += altura;
      media = media1;
      media /= cont;
     }

      printf("Media da altura das pessoas acima de 50 anos de idade %f\n", media);

  }
  return 0;
}