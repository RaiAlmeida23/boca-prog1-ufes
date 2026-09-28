#include <stdio.h>

int main() {
	int num = 0, ordem = 1;
	int uni = 0, dez = 0, cen = 0;

	scanf("%d %d", &num, &ordem);

	uni = num % 10;
	dez = (num / 10) % 10;
	cen = (num / 100) % 10;

	if(ordem == 1) {
		if(uni % 2 == 0) {
			printf("PAR");
		} else {
			printf("IMPAR");
		}

	} else if(ordem == 2) {
		if(dez % 2 == 0) {
			printf("PAR");
		} else {
			printf("IMPAR");
		}

	} else if(ordem == 3) {
		if(cen % 2 == 0) {
			printf("PAR");
		} else {
			printf("IMPAR");
		}
	}

	return 0;
}