#define PI 3.141592
#define EXP 2

#include <stdio.h>
#include <math.h>

int main(){
	float raio = 0.0;
	float area = 0.0, raio2 = 0.0;

	scanf("%f", &raio);
	
	area = PI * (pow(raio, EXP));
	raio2 = sqrt((area/EXP) / PI);

	printf("%.2f %.2f", area, raio2);

	return 0;
}