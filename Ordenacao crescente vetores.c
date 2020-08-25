#include <stdio.h>
#include <stdlib.h>

int main () {
	int x,y,z,aux,a,b,c;
	printf ("Digite os 3 valores\n");
	scanf ("%d%d%d", &x,&y,&z);
	a = x;
	b = y;
	c = z;
	if (x>z) {
		aux = z;
		z = x;
		x = aux;
	}
	if (x>y) {
		aux = y;
		y = x;
		x = aux;
	}
	if (y>z) {
		aux = z;
		z = y;
		y = aux;
	}
	printf ("Nova ordem:\n%d\n%d\n%d\n", x,y,z);
	printf ("");
	printf ("\n%d\n%d\n%d", a,b,c);
}
