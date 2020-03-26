#include <stdio.h>

int main(){

    int n, r, cr, a=1;
    
    printf("Digite aqui o numero: \n");
    scanf("%i", &n);
    cr = 0;
    for (a=1;a<=n; a++){
        r=n%a;
        if (r==0) cr=cr+1;
    }
    if(cr==2) printf("%i é um numero primo \n", n);
    else printf("%i Não é um numero primo \n",n);    

return 0;
}