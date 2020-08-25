#include <stdio.h>
#include <stdlib.h>
#define TAM 9

int main () {
	int h[TAM], b[TAM], f[TAM], r[TAM], i=0,j=0,k=0,s=0;
	printf ("Digite o primeiro vetor:\n");
	for (i=0; i<TAM; i++) {
		scanf ("%i", &h[i]);
	}
	printf ("Digite o segundo vetor:\n");
	for (j=0; j<TAM; j++) {
		scanf ("%i", &b[j]);
	}
	printf ("Digite o terceiro vetor:\n");
	for (k=0;k<TAM;k++) {
		scanf ("%i", &f[k]);
	}
		for (s=0; s<3;s++) {
			r[s] = h[s];
		}
			for (s=3; s<6;s++) {	
				r[s] = b[s];
			}
				for (s=6; s<9;s++) {
					r[s] = f[s];
				}
				printf ("O vetor resultante é:\n");
					for (s=0;s<TAM;s++) {
						printf ("\t%i", r[s]);
					}
			}

