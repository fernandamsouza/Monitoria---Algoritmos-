// OS TRINTA PRIMEIROS TERMOS DA SEQUENCIA DE FIBONACCI PRIMOS OU NAO

#include "stdio.h" // BIBLIOTECAS PARA RESOLU��O DA QUEST�O
#include "stdlib.h"

int main()
{
	int a, b, result, i,j, primo, div=0; // DECLARA��O DAS VARI�VEIS. 
	printf ("Os trinta primeiros termos da sequencia de fibonacci primos ou nao:\n");
	a = 0;
	b = 1;
	printf ("O numero %d nao eh primo \nO numero %d nao eh primo",a,b); // PARA O N�MERO 0 E 1 DECLARAMOS FORA.
	for (i = 2; i <= 30; i++) { // O "I" COME�A NO 2 E VAI AT� QUANDO SER MENOR QUE 30, DE 1 EM 1.
			result = a + b; // GUARDANDO NA VARI�VEL "RESULT" A SOMA DE X+Y, OU SEJA, A SOMA DOS TERMOS ANTERIORES.
			a = b; // O NOVO X(PRIMEIRO TERMO) AGORA � O SEGUNDO TERMO(Y).
			b = result; // O NOVO Y(SEGUNDO TERMO) AGORA � O RESULT (RESULTADO DA SOMA DOS DOIS ANTERIORES).
				primo = 0; // INICIANDO A VARI�VEL PRIMO COMO 0.
				for (j = 1; j <= b; j++) { // AGORA O FOR QUE ME CONFUNDI, ELE DEVERIA TER SIDO POSTO DENTRO DO FOR INICIAL. ESSE DE AGORA COME�A NO 1 E VAI AT� O B, OU SEJA, AT� O N�MERO CALCULADO ANTERIORMENTE NO FIBONACCI, DE UM EM UM.
					if ((result%j) == 0){ // O "J" � UMA VARI�VEL QUE SERVE EXATAMENTE COMO O "I", APENAS PARA SABER QUAL N�MERO SER� DIVIDIDO DENTRO DE CADA LOOP.
					primo ++; // SE FOR DIVIS�VEL, ARMAZENA NA VARI�VEL PRIMO.
					}
					}
					if (primo == 2) { // SE O N�MERO DE DIVISORES FOR IGUAL A DOIS, O N�MERO � PRIMO.
					printf ("\nO numero %d eh primo.", result);
				}
				else { // CASO CONTR�RIO, O N�MERO N�O � PRIMO.
					printf ("\nO numero %d nao eh primo.", result);
				}		
			}
	return 0; // FIM DE PROGRAMA, O "return 0;" apenas serve para encerrar a execu��o.
}

