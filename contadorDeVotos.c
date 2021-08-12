#include <stdio.h>

struct candidato
{
    const char *nome;
    int votos;
} candidato[5] = { {"Maria Ferreira",    0},
                   {"Silas Prado",       0},
                   {"Carlos Xavier",     0},
                   {"Marina Stuart",     0},
                   {"Francisca Pimenta", 0}
                 };

int main(int argc, char **argv)
{
	int nulo = 0 , branco = 0, voto;
	char cont;
	do
	{
		printf ("Escolha um dos numeros abaixo para realizar a sua votacao:");
		printf ("\n\n 1 - Maria Ferreira");
		printf ("\n 2 - Silas Prado");
		printf ("\n 3 - Carlos Xavier");
		printf ("\n 4 - Marina Stuart");
		printf ("\n 5 - Francisca Pimenta");
		printf ("\n 6 - Voto Nulo");
		printf ("\n 0 - Branco\n\n");	
		scanf("%d",&voto);
		switch(voto)
		{
			case 0:
			{
				nulo++;
				break;
			}
			case 1: case 2: case 3: case 4: case 5:
			{
				candidato[voto - 1].votos++;
				break;
			}
			case 6:
			{
				branco++;
				break;
			}
			default:
			{
				printf("Não existe\n");
				break;
			}
		}
		printf("Continua? s/n\n");
        scanf("%c", &cont);
	}
	while(cont != 'n');
	for (int i = 0; i < 5; i++)
        printf("'%s' teve: %d votos\n", candidato[i].nome, candidato[i].votos);
    printf("Nulo:%d --- Branco:%d",nulo,branco);

}