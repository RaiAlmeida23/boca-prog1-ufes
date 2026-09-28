#include <stdio.h>

int main() {
	int pessoas = 0, itens = 0;
	int resp = 0;	

	scanf("%d %d", &pessoas, &itens);

	if(itens % pessoas == 0) {
		resp = pessoas;

	} else {
		resp = itens % pessoas;

	}

	printf("RESP:%d", resp);

	return 0;
}