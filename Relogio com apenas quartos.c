#include <stdio.h>
#include <stdlib.h>

int main () {
	int i, j , k;
	for (i=0;i<24;i++) {
		for (j=0;j<4;j++) {
			for (k=0;k<=45;k += 15) {
			printf ("\n%d:%d",i, k);
		}
		}
	}
	return 0;
}
