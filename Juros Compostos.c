//Trabalho de Programa��o - Juros Compostos - Hebert farias Barbosa

#include <stdio.h>										//biblioteca de comandos
#include <stdlib.h> 									//biblioteca para chamadas do sistema
#include <math.h> 										//biblioteca para opera��es matem�ticas em C

														
int main (void)  										//Primeira fun��o
{
   int meses;      						    			//Valor de Int(numeros inteiros) = resultado do valor de meses
   float montante, resultado;							//Valor de Float(numeros decimais) = montante(valor em R$) e resultado(Valor Final)
   printf("Digite o valor a ser calculado:\n");			//Comando usado para imprimir o que ta dentro do parenteses no programa(printf)
   scanf ("%f",&montante);								//Comando para digitar algo no programa executado
   printf("Digite a quantidade de meses:\n");		    //Comando usado para imprimir o que ta dentro do parenteses no programa(printf)
   scanf ("%d",&meses);									//Comando para digitar algo no programa executado
   
   resultado = montante*pow(1.0341, meses);				//resultado(montante = resultado do valor final)
   														//montante(Resultado em R$) *(Opera��o de multiplica��o) pow(Comando para potencia��o)
   printf("valor final =\n %f\n", resultado); 			//Comando usado para imprimir o que ta dentro do parenteses no programa(printf) 
														//Neste caso imprimir� o resultado do valor final		
   system("PAUSE");										//Exibe a mensagem �Pressione qualquer tecla para continuar...� e interrompe a execu��o do programa
   return 0;											//O comando return indica o valor final que a fun��o produz
}
