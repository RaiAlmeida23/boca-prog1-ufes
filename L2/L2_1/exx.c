#include <stdio.h>

int main() {
	int n = 0;
	int m = 0;
	int i = 0;
	int primeiro = 1;
	
	scanf("%d %d", &n, &m);

	printf("RESP:");

	for(i = n + 1; i < m; i++){
		if(i % 2 == 0) {
			printf("%d ", i);
		}
	}

	return 0;
}