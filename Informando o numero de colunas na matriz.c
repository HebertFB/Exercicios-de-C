#include <stdio.h>
#include <stdlib.h>

void main ()
{
  int matriz[10][10];
        int i, j;
        int coluna;
		
		// valida dimensão da Matriz
        do
        {
            printf("Entre com a quantidade de colunas: ");
            scanf("%d", &coluna);
        } 
		while ((coluna <= 0) || (coluna > 10));
		

		// le os valores da matriz
        for (i =0 ; i < coluna; i++)
          {
            for (j =0; j < coluna; j++)
                {
                   printf("Entre com o elemento M[%d][%d]: ", i, j);
                   scanf("%d", &matriz[i][j]);
				}                  
            }


		printf("\n");
		
		// impressão da matriz
		for (i =0 ; i < coluna; i++)
		{			
           for (j = 0; j < coluna; j++)
           {
			   printf("  %d ",  matriz[i][j]); 
           }
			   printf("\n");
		}
       printf("\n");
       printf("diagonal >");
       	// impressão da diagonal
		for (i =0 ; i < coluna; i++)
		{			
           for (j = 0; j < coluna; j++)
           {
           	if ( j == i){
			   
			   printf("  %d ",  matriz[i][j]); 
       }
		   }
			   printf(">");
		}
       printf("\n");
		
		
}
