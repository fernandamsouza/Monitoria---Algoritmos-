#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
    int m,n,x,y,ft,s;
    x=0;
    y=0;
    n=1;
    s=0;
    scanf("%i",&m);
    while(m>0){
        if((m%2)==0)
        {
            for(n=1;n<=m;n++){
                if((m%n)==0){
                    x=x+1;
                }
            }
        printf("Os divisores: %d\n",x);
        }
        else
        {
            if(m<12){
                ft=1;
                while(m>0)
                {
                    ft = ft*(m);
                    m=m-1;
                }
                printf("O fatorial: %i\n",ft);
            }
            else
            {
                while(n<=m){
                        s=s+(s+1);
                        n=n+1;
                    }
                printf("A somatória:%i\n",s);
            }
        }
    scanf("%i",&m);
    x=0;
  }
}
