#include <stdio.h>
#define M 10

int main(void) {
  int v[M],i,j,x=0,h,cont=0;
  printf ("Digite os valores do vetor\n");
  for(i=0;i<M;i++){
    scanf("%d",&v[i]);
  }
  printf ("Os valores iguais no vetor sao:\n");
  for(i=0;i<M;i++){
    for(j=M;j>=0;j--){
      if(i!=j){
      if(v[i]==v[j]){
		cont++;
		h = v[i];
		printf ("%d\n", h); 
      }  
    }     
    } 
  }
  if (cont==0) {
  	printf ("Portanto, nao existem valores iguais no vetor.");
  }
  else {
  	  printf("Portanto, existem %d valores iguais no vetor.\n",cont);
  }
  return 0;
}
