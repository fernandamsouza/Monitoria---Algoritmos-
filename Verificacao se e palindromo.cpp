#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int j,i=0; //inicia  flag com 0;
	char frase[20];
	
	printf("Digite uma frase/palavra: ");
	scanf("%s",frase);
	for(j=strlen(frase); j>=0; j--){
			if((frase[strlen(frase)-1]==frase[0]) && (frase[strlen(frase)-2]==frase[1]))
				i++; 
	}
	printf("\n\n");		
	if(i!=0) 
		printf("PALINDROMO\n\n");
	else
		printf("NAO PALINDROMO\n\n");
}
