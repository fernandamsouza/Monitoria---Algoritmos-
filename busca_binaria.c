#include <stdio.h>
#define N 10

int main(void) {
  int vet[N]={1,2,3,5,7,15,20,21,23,34};
  int inicio,meio,fim,i,aux,n;
  printf("\nInsira o número para pesquisa no vetor: ");
  scanf("%i",&n);
  inicio=0;
  fim=N-1;
  while (inicio <= fim) {
	    meio = (inicio+fim)/2;
	    if(n == vet[meio]){
	      aux = 0;
	      break;
	    }
	    else if(n<vet[meio]){
	      fim = meio-1;
	      continue;
	    }
	    else if(n>vet[meio]){
	      inicio = meio+1;
	      continue;
	    }
	    else{
	      aux=1;
	      break;
	    }
  }
  if(aux==0) {
  printf("\nValor %i encontrado na posicao %i",n,meio);
  }
  else {
  printf("\nValor %i nao encontrado",n);
  }
  return 0;
}
