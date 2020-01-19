//Estrutura de Repetição - Laboratório 02
#include <stdio.h>
#include <stdlib.h>

int main()

{
	int alf=65;
	printf("Alfabeto MAIUSCULO \n");

	for (alf=65; alf<=90; alf++)
	{
		printf("%c ", alf);
	}
	printf("\n\nAlfabeto minusculo \n");
	for (alf=97; alf<=122; alf++)
	{
		printf("%c ", alf);
	}
	printf("\n\n\n******* Alfabeto invertido ******* \n");
	
	printf("\n\nAlfabeto MAIUSCULO \n");
	for (alf=90; alf>=65; alf--)
	{
		printf("%c ", alf);
	}
	printf("\n\nAlfabeto minusculo \n");
	for (alf=122; alf>=97; alf--)
	{
		printf("%c ", alf);
	}
	return 0;
}
