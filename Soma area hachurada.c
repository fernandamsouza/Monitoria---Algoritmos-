//4-2
#include <stdlib.h>
#include <stdio.h>

int main () {
	int M[12][12],i,j,soma;
	FILE *cd = fopen ("cd.txt", "r");
  		if (cd==NULL){
     printf("\nO arquivo nao foi lido.");
     return -1;
  	}
     while ( !feof(cd)){ 
	for (i=0;i<12;i++) {
		for (j=0;j<12;j++) {
			fscanf (cd, "%d", &M[i][j]);
		}
	}
	}
		for (i=0;i<11;i++) {
		for (j=0;j<12-i;j++) {
			soma += M[i][j];
		}
	}
	printf ("A soma da area hachurada e: %d", soma);
	return 0;
}

