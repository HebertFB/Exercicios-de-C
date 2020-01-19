//Trabalho de Programação - Divisivel por 5 e 3 - Hebert Farias Barbosa

#include <stdio.h>									 //Local de onde o programa vai tirar o conteudo para os comandos
#include <stdlib.h>									 //Local de onde o programa vai tirar as chamadas do sistema

int main(void)										 //Primeira função
{
	int dig;										 //Int: quer dizer que serão usados numeros inteiros
	
	printf("Digite o Valor que sera processado: \n");//comando usado para imprimir o que ta dentro do parenteses no programa
	scanf("%i", &dig); 								 //Comando para digitar algo no programa executado
	
	if(dig %3 == 0 && dig %5 == 0) {				 //função usada para 2 resposta, no caso true(verdadeira) ira imprimir o de baixo
	printf("Divisivel por 3 e por 5. \n");			//Comando usado para imprimir o que é divisivel se o resultado der verdadeiro
	}
	else {
	if(dig %3 == 0 && dig %5 != 0) {						//função usada para 1 resposta true(verdadeira) e 1 false ira imprimir o de baixo
	printf("O valor e divisivel por 3 mas nao por 5. \n");  //Comando usado para imprimir o que é divisivel se o resultado for 
	}														//correspondente a true(para 3) e false (para 5)
	else{
	if(dig %3 != 0 && dig %5 == 0) {						//função usada para 1 resposta true(verdadeira) e 1 false ira imprimir o de baixo
	printf("O valor e divisivel por 5 mas nao por 3. \n");  //Comando usado para imprimir o que é divisivel se o resultado for
															//correspondente a true(para 3) e false (para 5)
	}
	else{									 					//Caso a resposta de If for False(Falso) ira imprimir o que está abaixo
	printf("O valor nao e Divisivel por 3 e nem por 5. \n");	//Comando usado para imprimir o que é divisivel se o resultado der falso
	}
}
}
system("PAUSE");				//Exibe a mensagem “Pressione qualquer tecla para continuar...” e interrompe a execução do programa
return 0;						//O comando return indica o valor final que a função produz
}
