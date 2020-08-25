#include <stdlib.h>
#include <stdio.h>
#define TAM 10

int main () {
	int v[TAM], i, j,resp;
	printf ("Digite o vetor de 10 posicoes:\n");
	for (i=0; i<TAM;i++) {
		scanf ("%i", &v[i]);
	}
	for (i=0;i<TAM;i++) {
		for (j=i+1;j<TAM;j++) {
			if (v[j] == v[i]) {
				resp = v[j];
		}
	}
}
		if (1==resp) {
printf ("%i", v[j]);
}
else
{
	printf ("Nao ha valores iguais");
}


	return 0;
}
