#include <stdio.h>
#include <stdlib.h>

int main () {
	int i,n;
	printf ("Digite um numero entre 2 e 1000:\n");
	scanf ("%d", &n);
	printf ("Tabuada:\n");
	for (i=1;i<=10;i++) {
		printf ("%d x %d = %d\n",i,n,i*n);
	}
}
