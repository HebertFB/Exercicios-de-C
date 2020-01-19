//Estrutura de Repetição - Laboratório 01
#include <stdio.h>
#include <stdlib.h>

void main ()

{
	int num, L, C;
	
	do
	{
	
	printf("Insira um numero maior que zero: ");
	scanf("%d", &num);
	
	} while (num < 0);
	
	for (L = num; L >= 1 ; L--)
	{
	   for ( C = 1; C <= L; C++ )
	   {
	   	 printf("%d\t", C);
	   }
	   
	   printf ("\n");
	}
	
	printf("\n");
	
	getch();
    return 0;
}
