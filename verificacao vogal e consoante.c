/*4) Criar um programa que receba um nome como parâmetro e
retorne quais letras são vogais e quais são as consoantes.
 Usar a função que verifica se é uma vogal do item 3
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int func(char x){ 
	if ((x=='a') || (x=='e') || (x=='i') || (x=='o') || (x=='u')){
		return 1;
	}	else {
		return 0;
	}
}

int main () {
	char nome[30];
	int x,tam;
	printf ("\nDigite o nome:");
	scanf ("%s", &nome);
	tam = strlen(nome);
	for (x=0;x<tam;x++) {
	if (func(nome[x])==1) {
	printf ("\nA letra %c e uma vogal", nome[x]); }
	else {
	printf ("\nA letra %c e uma consoante", nome[x]);
}
}
return 0;
}
