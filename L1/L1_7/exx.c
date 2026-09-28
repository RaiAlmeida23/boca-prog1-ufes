#include <stdio.h>

int main() {
	float temp = 0.0;
	char uni = 0;
	float paraF = 0.0, paraC = 0.0;

	scanf("%f %c", &temp, &uni);

	paraF = (temp * 1.8) + 32;
	paraC = (temp - 32) / 1.8;

	if(uni == 'F' || uni == 'f') {
		printf("%.2f (C)", paraC);

	} else if(uni == 'C' || uni == 'c') {
		printf("%.2f (F)", paraF);

	}

	return 0;
}