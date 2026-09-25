#include <stdio.h>

int main(){
	float x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
	float perimetro = 0.0;

	scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

	perimetro = ((x2 - x1) + (y2 - y1)) * 2;

	printf("%.2f", perimetro); 

	return 0;
} 