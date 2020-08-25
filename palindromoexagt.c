#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char frase[20];
	int j, i=0;

	printf("Digite uma frase/palavra: ");
	scanf("%s",frase);
	for(j=strlen(frase); j>=0; j--){
			if((frase[strlen(frase) - 1] == frase[0]) && (frase[strlen(frase) - 2] == frase[1]))
				i++;
	}
	printf("\n");
	if(i != 0)
		printf("E um palindromo\n");
	else
		printf("Nao e um palindromo\n");
}
