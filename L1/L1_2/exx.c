#include <stdio.h>
int main(){

	float altura = 0.0;
	float largura = 0.0;

	float perimetro = 0.0;

	scanf("%f %f", &altura, &largura);

	perimetro = (altura + largura) * 2;

	printf("%.2f", perimetro);

	return 0;
}