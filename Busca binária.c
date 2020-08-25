#include <stdlib.h>
#include <stdio.h>

int main () {
	int tam,meio,comeco,final,result=1,i, x;
	printf ("Digite o tamanho do vetor desejado:\n");
	scanf ("%d", &tam);
	int v[tam];
	printf ("Insira os numeros do vetor de forma ordenada:\n");
	for (i=0;i<tam;i++) {
	scanf ("%d", &v[i]);
	}
	printf ("Digite o numero o qual devera ser buscado no vetor:\n");
	scanf ("%d",&x);
	comeco = 0;
	final = tam-1;
	while (comeco<=final) {
		meio = (comeco+final)/2;           
              if (x == v[meio]) {
                 result = 0;
                 break;
              }
              else if (x < v[meio]) {
                 final = meio - 1;
              }
              else if(x > v[meio]) {
                 comeco = meio + 1;
              }     
              else{
                 result = 1;
                 break;
              }	
}
	 if (result == 1){
           printf("O numero %d nao existe no vetor.", x);                      
        } else {
           printf("O numero %d existe no vetor.", x);
        }
return 0;
}
