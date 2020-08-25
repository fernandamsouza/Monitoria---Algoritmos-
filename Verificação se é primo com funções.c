#include <stdio.h>
#include <stdlib.h>]

int eh_primo(int N);
int main() {
   int N, x=0, i;
   printf("\n Digite um numero:\n");
   scanf("%i", &N); 
   if (eh_primo(N)) 
   printf("\n NPrimo");
   else printf("primo");
    return 0;
}

int eh_primo ( int N ){
    int i, cont=0;
    for ( i=N ; i >=1; i--){
          if ( N% i ==0) 
              cont++;          
   }
   if (cont > 2 ) return 1;
   else return 0;
}
 

