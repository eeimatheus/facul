#include <stdio.h>

int main(){

    float raio, pi=3.14, area;

    printf("Digite o valor do raio aqui: ");
    scanf("%f", &raio);

    area = 2 * pi * raio;

    printf("A area total e: %.2f. \n", area);
    
    return 0;
}