#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Menu
int main ()
{
	char m, A, B, C, D, S;

		printf("MENU");
		printf("\n\n - Prato A: R$ 30,00");
		printf("\n\n - Prato B: R$ 40,00");
		printf("\n\n - Prato C: R$ 50,00");
		printf("\n\n - Prato D: R$ 60,00");
		printf("\n\n - Opcao S: Sair do MENU\n\n");
	do{

		printf("\nEscolha uma opcao:");
		scanf("%c", &m);

		switch (m) {
		case 'A':
			printf("\n - Prato A: R$ 30,00");
			break;

		case 'B':
			printf("\n - Prato B: R$ 40,00");
			break;

		case 'C':
			printf("\n - Prato C: R$ 50,00");
			break;

		case 'D':
			printf("\n - Prato D: R$ 60,00");
			break;

		case 'S':
			printf("\n - Opcao S: Sair do MENU");
			break;



		}

		}

	while (m!='S');
	return 0;
	}
