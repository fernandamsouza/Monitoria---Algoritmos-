/*4) Criar um programa que receba um nome como par�metro e
retorne quais letras s�o vogais e quais s�o as consoantes.
 Usar a fun��o que verifica se � uma vogal do item 3
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
