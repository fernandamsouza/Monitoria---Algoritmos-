#include <stdio.h>
#include <math.h>

int main () {
	int m=0,i, cont;
	while (1) {
	scanf ("%i", &m);
	printf ("%i\n", m);
	if (m <0) {
		return 0;
	}
	if (m%2==0) {
		for (i=1;i<= (m/2);i++) {
			if (m%i==0) {
				cont++;
			}
		cont++;
		printf ("num de divisores %i\n",cont);
		}	
	} else if (m<12) {
		cont=m;
		for (i=m-1;i <=1;i--) {
			printf ("%i\n", cont);
			cont *=i;
		}
		printf ("m! = %i\n", cont);
	} else {
		cont=0;
		for (i=1;i<=m;i++) {
			cont +=i;
	}
	printf ("%i\n", cont);
    }
  }
  return 0;
}
