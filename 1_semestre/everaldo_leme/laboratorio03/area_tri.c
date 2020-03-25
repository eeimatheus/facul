#include <stdio.h>

int main()
{
	float base,alt,area;

	printf("Base do Triangulo: ");
	scanf ("%f", &base);
	printf("Altura do Triangulo: ");
	scanf ("%f", &alt);
	area= (base * alt)/2;//vuma

    area>=1000 ? printf("Triangulao bixo: %.2f. \n", area) :  printf("Area total do Triangulo:  %.2f. \n", area);

	return 0;
}
