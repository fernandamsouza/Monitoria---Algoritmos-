#include <stdio.h>
#include <stdlib.h>

int main () {
	int a,b;
	printf ("Digite os 2 valores\n");
	scanf ("%d%d", &a,&b);
	if (a%b==0 || b%a==0) {
		printf ("Sao multiplos");
	}
	else {
		printf ("Nao sao multiplos");
	}
	return 0;
}
