#include <stdlib.h>
#include <stdio.h>

int main () {
	int m[6][6],i,j,s=0,x,u,v[6];
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
	for(i=0;i<6;i++){
	    printf("Entre com um numero de cidade\n");
	    printf("0: Carceres\t1: B. do Bugres\t2: Cuiaba\t3: V. Grande\t4: Tangara\t5: P. Lacerda\n");
	    scanf("%d",&v[i]);
	}
	int o[5] = {m[v[0]][v[1]],m[v[1]][v[2]],m[v[2]][v[3]],m[v[3]][v[4]],m[v[4]][v[5]]};
	for(x=0;x<=5;x++){
			s = o[x] + s;
		}
	printf ("%d", s);
	return 0;
}
