#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{ 
	float pi=3.141592, r, area, volume;
	 printf("digite o valor do raio: ");
	 scanf("%f",&r);
	 area = (pi * 4)*(r*r);
	 volume = ((4/3)*pi)*pow(r,3);
	 printf("a area da esfera e: %.2f\n", area);
	 printf("o volume da esfera e: %.2f\n", volume);
 	 system("PAUSE");
	return 0;
}
