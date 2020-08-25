#include <stdio.h>
#include <stdlib.h>

int main () {
	int matriz [3][3], i, j,aux, media;
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			scanf ("%d", &matriz[i][j]);
		}
	}
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if (i==j) {
			aux = (i+j)/2;
			media = aux;	
			}
		}
}
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {	
			printf ("%d", media);
		}
	}
		
}

// 3) Leia uma matriz quadrada qualquer e crie um programa para calcular a média aritmética dos
// elementos hachurados da figura 1, letra a
