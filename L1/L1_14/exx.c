#include <stdio.h>

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0, xPonto = 0, yPonto = 0;

	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &xPonto, &yPonto);

	if ((xPonto - x1) * (xPonto - x2) <= 0 && (yPonto - y1) * (yPonto - y2) <= 0) {
        	printf("Dentro");

    	} else {
        	printf("Fora");
    	}
	return 0;
}