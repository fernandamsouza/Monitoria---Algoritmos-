#include <stdio.h> 

#define M 5

int main() { 

  int N[M],i; 

  for(i=0;i<M;i++){ 

    scanf("%i",&N[i]); 

  } 

  for(i=0;i<M;i++){ 

    printf("%i\n",N[i]); 

  } 
	printf ("");
  for(i=M-1;i>=0;i--){ 

    printf("%i\n",N[i]); 

  } 

  return 0; 

} 
