 //Laboratorio 02
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int a,b,c,d;
	float s,m;
     printf("Digite o 1 valor: \n");
     scanf("%i",&a);
     printf("Digite o 2 valor: \n");
     scanf("%i",&b);
     printf("Digite o 3 valor: \n");
     scanf("%i",&c);
     printf("Digite o 4 valor: \n");
     scanf("%i",&d);
     s = a + b + c + d;
     m = s / 4;
     printf("A soma desses 4 numeros e: %.f \n", s);
     printf("A media desses 4 numeros e: %.2f \n", m);
     system("PAUSE");
	return 0;
}
