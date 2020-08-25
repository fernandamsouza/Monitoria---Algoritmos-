#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#define C 100

char remove_acen (char x);

int main() {
 setlocale(LC_ALL,"Portuguese");
 int tam;
 char param[C],i;
 char nome[C];
 scanf("%[^\n]s", nome);
 tam = strlen(nome);
 for ( i=0; i<tam; i++){
     param[i] = remove_acen(nome[i]);
     printf("\n%c", param[i]);
 }
 return 0;
}

char remove_acen (char x) {
    char c;
    c=ispunct(x);
    if (c!=0)
    return ' ';
    if (x>=128 && x<=254)
    return ' ';
    else
        return x;
}
