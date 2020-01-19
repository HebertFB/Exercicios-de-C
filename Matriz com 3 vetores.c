#include <stdio.h>		//Hebert Farias Barbosa - RGM:2067336-1
#include <conio.h>		//LAB05 – Operações com Vetores 

int main()
{
	int vetorA[5], vetorB[5], vetorC[5];
	int A, B, C, MSG=0, i;
	
	for (A = 0;A < 5; A++)
	{
		printf("Vetor A: Informe o valor na posicao %i:", A+1);
		scanf("%i", &vetorA[A]);
	}
	printf("\n\n");
	for (B = 0;B < 5; B++)
	{
		printf("Vetor B: Informe o valor na posicao %i:", B+1);
		scanf("%i", &vetorB[B]);
	}
	printf("\n\n");
	for (C = 0;C < 5; C++)
	{
		vetorC[C]= vetorA[C] + vetorB[C];
	}
	
	
	printf("Vetor A: ");
	for (A = 0;A < 5; A++)
	{
		printf(" %i ",  vetorA[A]);
	}
	printf("\nVetor B: ");
	for (B = 0;B < 5; B++)
	{
		printf(" %i ",  vetorB[B]);
	}
	printf("\nVetor C: ");
	for (C = 0;C < 5; C++)
	{
		printf(" %i ",  vetorC[C]);
	}
	printf("\n");
	
	
	for (C = 0;C < 5; C++)
	{
		for (B = 0;B < 5; B++)
		{
			if (C != B)
			{
				if (vetorC[C] == vetorC[B])
				{
					MSG++;
				}
			}
		}
	}
	if (MSG>0)
	{
		printf("Existem numeros repetidos no vetor C\n\n");
	}
	else
	{
		printf("Nao existem numeros repetidos no vetor C\n\n");
	}
	
	getch ();
	return 0;
}
