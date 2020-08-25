#include <stdio.h>
#include <stdlib.h>

int main () {
    int i,j;
    for (i=1;i<=10;i++) {
    	printf ("%d X o numero %d:\n", i, i);
    	for (j=1;j<=i;j++) {
    		printf ("%d\n", i);
		}
    }
    return 0;
}

