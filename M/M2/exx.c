#include <stdio.h>
int main(){
	float num = 0.0;
	float real = 0.0;
	int inteiro = 0;

	scanf("%f", &num);
	
	inteiro = num;
	real = num - inteiro;

	printf("INTEIRO:%d,REAL:%.2f", inteiro, real);

	return 0;
}