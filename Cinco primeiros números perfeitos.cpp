#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	int j,n,cont=0,k;
	printf ("Os cinco primeiros numeros perfeitos sao:\n");
	for (k=2;k <=9000;k++) {
		cont = 0;
		n=k;
		for (j=1;j <= (n/2);j++) {
			if (n%j == 0) {
				cont +=j;
			}
		}
		if (n==cont) {
			printf ("%d\n", cont);
		}
	}
		if (n=13) {
			cont = (pow (2,n-1) * ((pow (2,n)) - 1 ));
			printf ("%d", cont);
		}
	return 0;
}
