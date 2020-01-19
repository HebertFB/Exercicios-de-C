 //Laboratorio 01
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float c,f;
     printf("Digite a temperatura em Celsius: \n");
     scanf("%f",&c);
     f = c * 9/5 + 32;
     printf("A temperatura em Fahrenheit e de: %.1f\n", f);
     system("PAUSE");
	return 0;
}
