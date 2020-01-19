 //Laboratorio 01
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a,b,c,d,z;
     d = 2050;
     printf("Digite o ano atual:\n");
     scanf("%i",&a);
     printf("Digite o ano de nascimento:\n");
     scanf("%i",&b);
     c = a - b;
	 z = d - b;
     printf("Sua idade e: %i\n", c);
     printf("Sua idade sera em 2050: %i\n", z);
     system("PAUSE");
	return 0;
}
