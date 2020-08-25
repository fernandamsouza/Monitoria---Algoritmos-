//3) Leia uma matriz quadrada qualquer e crie um programa para calcular a média aritmética dos
// elementos hachurados da figura 1, letra a.

#include <stdlib.h>
#include <stdio.h>

int main () {
	int M[12][12],i,j,soma,cont,media;
	FILE *cd = fopen ("cd.txt", "r");
  		if (cd==NULL){
     printf("\nNao deu certo");
     return -1;
  	}

     while ( !feof(cd)){ 
	for (i=0;i<12;i++) {
		for (j=0;j<12;j++) {
			fscanf (cd, "%d", &M[i][j]);
		}
	}
	}
	soma = 0;
	cont = 0;
	for (i=2;i<=6;i++) {
		for (j=i+1;j<12-i;j++) {
			soma += M[i][j];
			soma += M[13-i][j];
			cont++;
		}
	}
	media = soma/cont;
	printf ("A media e: %d", media);
}


