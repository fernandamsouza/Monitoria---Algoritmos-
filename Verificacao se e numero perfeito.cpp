#include <cstdlib>

#include <stdio.h>

int main()

{

int np=0,num,n;

printf("Digite um numero:\n");

scanf("%d", &num);

for(n=1;n<num;n++){

if(num%n==0) np=np+n;

}

if(np==num) printf("%d e um numero perfeito\n",num);

else printf("%d nao e um numero perfeito\n",num);

return 0;

}
