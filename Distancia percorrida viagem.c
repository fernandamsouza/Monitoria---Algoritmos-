#include <stdlib.h>
#include <stdio.h>

int main () {
	int m[6][6],i,j,s=0,x;
	FILE *input = fopen ("input.txt", "r");
  		if (input==NULL){
     printf("\nNao deu certo");
     return -1;
  	}
	  printf("Leu o arquivo\n");

     while ( !feof(input)){
	for (i=0;i<6;i++) {
		for (j=0;j<6;j++) {
			fscanf (input, "%d", &m[i][j]);
				}
		}
	}
	int v[5] = {m[2][3],m[3][1],m[1][4],m[4][5],m[5][0]};
	for(x=0;x<=5;x++){
			s = v[x] + s;
		}
	printf ("A distancia percorrida durante a viagem foi de %d km.", s);
	return 0;
}
