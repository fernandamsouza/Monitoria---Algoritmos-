#include <stdio.h>
#include <stdlib.h>

int main () {
	int i,a,b,c,d,e,cont1=0,cont2=0,cont3=0,cont4=0;
	printf ("Digite os numeros\n");
	scanf ("%d%d%d%d%d",&a,&b,&c,&d,&e);
	for (i=0;i<=e;i+=2) {
		cont1++;
	}
	for (i=1;i<=e;i+=2) {
		cont2++;
	}
	while ((i>=a) && (i<=e)) {
	if (a>=0 || b>=0 || c>=0 || d>=0 || e>= 0) {
		cont3++;
	}
}
	while ((i>=a) && (i<=e)){
	if (a<0 || b<0 || c<0 || d<0 || e< 0) {
		cont4++;
	}
}
	printf ("%d valor(es) pares\n", cont1);
	printf ("%d valor(es) impares\n", cont2);
	printf ("%d valor(es) positivos\n", cont3);
	printf ("%d valor(es) negativos\n", cont1);
}
