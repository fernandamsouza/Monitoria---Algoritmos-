#include <stdlib.h>
#include <stdio.h>

int main () {
	int M[12][12],i,j,maior;
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
	maior = 0;
	for (i=0;i<6;i++) {
		for (j=i;j<13-i;j++) {
			if (M[i][j]>maior) {
				maior = M[j][i];
			}
			if (M[j][13-i]>maior) {
				maior = M[j][13-i];
			}
		}
	}
	printf ("O maior elemento da area hachurada e: %d", maior);
	return 0;
}

/* Arquivo de texto cd:
1 8 0 4 58 9 0 0 3 7 4 5 
6 78 9 3 4 5 6 1 2 3 8 9 
8 7 9 2 3 4 5 8 4 5 6 8
1 2 38 4 5 6 78 8 9 96 5 7
1 2 38 4 5 6 78 8 9 96 5 7
8 7 9 2 3 4 5 8 4 5 6 8
8 7 9 2 3 4 5 8 4 5 6 8
8 7 9 2 3 4 5 8 4 5 6 8
8 7 9 2 3 4 5 8 4 5 6 8
1 8 0 4 58 9 0 0 3 7 4 5
1 8 0 4 58 9 0 0 3 7 4 5
1 8 0 4 58 9 0 0 3 7 4 5
*/
	
