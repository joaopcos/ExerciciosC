#include <stdio.h>
#include <string.h>

int main() {

  //variaveis
  char texto[351];
  int i, fix;

   //armazenamento das variaveis
  printf("Insira um texto de ate 351 caracteres:\n");
  gets(texto);
  fix = strlen(texto);

    //carregando um vetor para armazenar cada letra em sua posicao
  for(i=0; i<fix; i++){
    
    //Substituicao dos caracteres
    if(texto[i] == 'a')
      texto[i] = '!';

    if(texto[i] == 'A')
      texto[i] = '!';

    if(texto[i] == 'e')
      texto[i] = '&';

    if(texto[i] == 'E')
      texto[i] = '&';

    if(texto[i] == 'i')
      texto[i] = '*';

    if(texto[i] == 'I')
      texto[i] = '*';

    if(texto[i] == 'o')
      texto[i] = '#';

    if(texto[i] == 'O')
      texto[i] = '#';

    if(texto[i] == 'u')
      texto[i] = '$';

    if(texto[i] == 'U')
      texto[i] = '$';

    //impressao do resultado na tela
      printf("%c", texto[i]);
  
  }

  return 0;
}