#include <stdio.h>
#include <math.h>

int main(){
	int num1 = 0;
	int num2 = 0;
	
	float soma = 0.0;

	scanf("%d %d", &num1, &num2);

	soma = (sqrt(num1)) + (sqrt(num2));

	printf("%.2f", soma);

	return 0;
}