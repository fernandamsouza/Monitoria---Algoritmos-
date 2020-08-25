#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define C 100
char remove_acen (char x);
int main()
{
 int tam,i;
 char param ;
 char nome[C];
 scanf("%[^\n]s", nome);
 printf("\nSeu nome : %s", nome);
 tam = strlen(nome);
 for ( i=0; i<tam; i++){
 param = remove_acen(nome[i]);
 printf("\n%c",param);
 }
 return 0;
}

char remove_acen (char x) {
  char c;
  c=ispunct(x);
  if (c==0)
    return x;
  else
    return ' ';
}
