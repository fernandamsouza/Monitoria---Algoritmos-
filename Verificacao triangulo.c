#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
	double a,b,c,aux;
	printf ("Digite os valores\n");
	scanf ("%lf%lf%lf", &a,&b,&c);
	if (a>=b+c || b>=c+a || c>=b+a) {
		printf ("NAO FORMA TRIANGULO");
	}
	else {		
	if (a<b) {
		aux = b;
		b = a;
		a = aux;
	}
	if (a<c) {
		aux = c;
		c = a;
		a = aux;
	}
	if (b<c) {
		aux = c;
		c = b;
		b = aux;
	}
	if (pow(a,2)==pow(b,2)+pow(c,2)) {
		printf ("Retangulo\n");
	}
	if (pow (a,2)>pow(b,2)+pow(c,2)) {
		printf ("Obtusangulo\n");
	}
	if (pow (a,2)<pow(b,2)+pow(c,2)) {
		printf ("Acutangulo\n");
	}
	if (a==b && b==c) {
		printf ("Equilatero\n");
	} else {
	if (a==b || a==c || b==c) {
		printf ("Isosceles\n");
	}
}
}
	return 0;
}
