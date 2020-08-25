#include <stdlib.h>
#include <stdio.h>

int main () {
	int M[12][12],i,j,menor,maior,auxi,auxj;
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
	menor = 0;
		for (i=0;i<11;i++) {
		for (j=0;j<12-i;j++) {
			if (M[i][j]<menor) {
				menor = M[j][i];
				auxi = i;
		}
	}
}
maior = 0;
		for (i=0;i<11;i++) {
		for (j=0;j<12-i;j++) {
			if (M[auxi][j]>maior) {
				maior = M[i][j];
				auxj = j;
			}
		}
	}
	printf ("O maior elemento da linha onde se encontra o menor elemento da area hachurada e: %d", maior);
	return 0;
}

