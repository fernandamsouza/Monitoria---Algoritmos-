#include <stdio.h>
#include <stdlib.h> 

main()
{
   int N,i;
   printf("Digite o numero para verificacao: ");
   scanf("%d", &N);
   	if (fibonacci(N)) {
   		printf ("O numero %d e um numero de Fibonacci.", N);
	   }
	   else {
	   	printf ("O numero %d nao e um numero de Fibonacci", N);
	   }
} 

int fibonacci(int N)                             
    {                                          
      int i, x = 0, y = 1, soma, cont=0;         
      for (i=0; i<=N; i++)           
      {                                        
        soma = x + y;                    
        x = y;                           
       y = soma;
       if(soma==N){
           cont++;
       }
     }
    if (cont == 1) {
     	return 1;
	}
 	else {
		return 0;
	}
}
