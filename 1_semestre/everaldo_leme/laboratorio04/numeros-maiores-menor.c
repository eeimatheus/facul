#include <stdio.h>

int main(){

    int x, y,z;

    printf("Digite o numero aqui: \n");
    scanf("%d", &x);

    printf("Digite o numero aqui: \n");
    scanf("%d", &y);
    
    //verifica se X é maior, menor ou igual a Y
    if (x<y)
    {
        printf("%d é menor que %d", x,y);
    }else if(x==y)
    {
        printf("%d é igual a %d", x,y);
    }
    
    else
    {
        printf("%d é maior que %d \n", y,x);
    }

    //Soma de x e y é igual a Z
    z=x+y;

    if (z>x)
    {
        printf("\n %d é maior que %d", z,x);
    }
    else
    {
        printf("\n %d é menor que %d", x,z);
    }
    //numero absoluto
    if (x<0, x*-1)
    {
        printf(" \n O valor absoluto de X é: %d", x);
    }
    else
    {
        printf("\n O valor absoluto de X é: %d", x);
    }
    if (y<0, y*-1)
    {
        printf(" \n O valor absoluto de Y é: %d", y);
    }
    else
    {
        printf("\n O valor absoluto de Y é: %d \n\n", y);
    }
    printf("\n \n");

    return 0;
}