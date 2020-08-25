// OS TRINTA PRIMEIROS TERMOS DA SEQUENCIA DE FIBONACCI PRIMOS OU NAO

#include "stdio.h" // BIBLIOTECAS PARA RESOLUÇÃO DA QUESTÃO
#include "stdlib.h"

int main()
{
	int a, b, result, i,j, primo, div=0; // DECLARAÇÃO DAS VARIÁVEIS. 
	printf ("Os trinta primeiros termos da sequencia de fibonacci primos ou nao:\n");
	a = 0;
	b = 1;
	printf ("O numero %d nao eh primo \nO numero %d nao eh primo",a,b); // PARA O NÚMERO 0 E 1 DECLARAMOS FORA.
	for (i = 2; i <= 30; i++) { // O "I" COMEÇA NO 2 E VAI ATÉ QUANDO SER MENOR QUE 30, DE 1 EM 1.
			result = a + b; // GUARDANDO NA VARIÁVEL "RESULT" A SOMA DE X+Y, OU SEJA, A SOMA DOS TERMOS ANTERIORES.
			a = b; // O NOVO X(PRIMEIRO TERMO) AGORA É O SEGUNDO TERMO(Y).
			b = result; // O NOVO Y(SEGUNDO TERMO) AGORA É O RESULT (RESULTADO DA SOMA DOS DOIS ANTERIORES).
				primo = 0; // INICIANDO A VARIÁVEL PRIMO COMO 0.
				for (j = 1; j <= b; j++) { // AGORA O FOR QUE ME CONFUNDI, ELE DEVERIA TER SIDO POSTO DENTRO DO FOR INICIAL. ESSE DE AGORA COMEÇA NO 1 E VAI ATÉ O B, OU SEJA, ATÉ O NÚMERO CALCULADO ANTERIORMENTE NO FIBONACCI, DE UM EM UM.
					if ((result%j) == 0){ // O "J" É UMA VARIÁVEL QUE SERVE EXATAMENTE COMO O "I", APENAS PARA SABER QUAL NÚMERO SERÁ DIVIDIDO DENTRO DE CADA LOOP.
					primo ++; // SE FOR DIVISÍVEL, ARMAZENA NA VARIÁVEL PRIMO.
					}
					}
					if (primo == 2) { // SE O NÚMERO DE DIVISORES FOR IGUAL A DOIS, O NÚMERO É PRIMO.
					printf ("\nO numero %d eh primo.", result);
				}
				else { // CASO CONTRÁRIO, O NÚMERO NÃO É PRIMO.
					printf ("\nO numero %d nao eh primo.", result);
				}		
			}
	return 0; // FIM DE PROGRAMA, O "return 0;" apenas serve para encerrar a execução.
}

