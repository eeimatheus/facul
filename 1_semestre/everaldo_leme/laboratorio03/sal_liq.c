#include <stdio.h>

int main(){

    float dt, vh, ht, inss, sb, dis, sl;

    printf("Quantidade de dias trabalhados: \n");
    scanf("%f", &dt);
    printf("Valor por hora: \n");
    scanf ("%f", &vh);
    printf("Horas trabalhadas no dia: \n");
    scanf("%f", &ht);
    printf("Porcentagem de desconto do INSS: \n");
    scanf("%f", &inss);
    
    sb = vh * ht;
    dis = sb*(inss/100);
    sl = (sb - dis) * dt;

    printf("Voce faturou no dia: %.2f reais \n", sb);
    printf("Parabens! O seu desconto do INSS foi: %.2f reais \n", dis);   
    printf("O seu salario liquido foi: %.2f reais \n",sl);

    return 0;
}