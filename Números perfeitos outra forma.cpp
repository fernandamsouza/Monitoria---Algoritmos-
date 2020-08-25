#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	int n, div, result, primo, termos;
	for (n = 2; n < 13; n++) {
				primo = 0;
				for (div = 1; div <= termos; div++) {
					if ((n%div) == 0){
					primo ++;
					}
					}
					if (primo == 2) {
		if (n=2) {
			result = (pow (2,n-1) * ((pow (2,n)) - 1 ));
			printf ("\nOs numeros perfeitos sao:\n%d", result);
		}			
	
		if (n=3) {
			result = (pow (2,n-1) * ((pow (2,n)) - 1 ));
			printf ("\n%d", result);
		}
		if (n=5) {
			result = (pow (2,n-1) * ((pow (2,n)) - 1 ));
			printf ("\n%d", result);
		}
		if (n=7) {
		result = (pow (2,n-1) * ((pow (2,n)) - 1 ));
		printf ("\n%d", result);
		}
		if (n=13) {
			result = (pow (2,n-1) * ((pow (2,n)) - 1 ));
			printf ("\n%d", result);
		}
		return 0;
	}
}
}
