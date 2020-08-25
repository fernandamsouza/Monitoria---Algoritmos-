#include <stdio.h>
#include <stdlib.h>
#define M 20

int main () {
	int v[M],i,aux,cont, j, p;
	printf ("Escreva os 20 numeros do primeiro vetor\n");
	for(i=0;i<M;i++) {
		printf ("[%d]",i);
		scanf("%d", &v[i]);
	}
	i=0;
	cont=0;
	p=0;
	for (i=0;i<M;i++) {
		if(v[i]==0) {
			cont++;
		}
	}
	while (p<cont) {
		for (i=0;i<M;i++) {
			if(v[i]==0) {
				for(j=i;j<M;j++) {
					v[j] = v[j+1];
				}
			}
		}
		p++;
	}
	for (i=19;i>(19-cont);i--) {
		v[i] = 0;
	}
	for(i=0;i<M;i++) {
		printf ("%d",v[i]);
	}
	return 0;
}
	

