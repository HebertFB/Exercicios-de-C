 //Laboratorio 04
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
    float real, cotacao, dolar;
     printf("Digite um valor em reais para converter: \n");
     scanf("%f", &real);
	 printf("Digite a cotacao atual do dolar: \n");
     scanf("%f", &cotacao);
     dolar = real / cotacao;
     printf("O valor da conversao de R$ %.2f em dolar e de aproximadamente: $ %.2f\n", real, dolar);
     system("PAUSE");
	return 0;
}
