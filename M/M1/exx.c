#include <stdio.h>
int main(){

	int num1 = 0;
	int num2 = 0;
	int aux = 0;

	scanf("%d %d", &num1, &num2);

	aux = num1;
	num1 = num2;
	num2 = aux;

	printf("%d,%d", num1, num2); 
	return 0;
}