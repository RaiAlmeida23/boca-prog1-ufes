#include <stdio.h>

int main() {
	char letra = 0;
	int posicao = 0;

	scanf("%c", &letra);

	if(letra >= 'a' && letra <= 'z') {
		letra = letra - 32;
		posicao = letra;
		printf("%c(%d)", letra, posicao);

	} else if(letra >= 'A' && letra <= 'Z') {
		printf("A letra deve ser minuscula!");

	} else {
		printf("Nao e letra!");

	}

	return 0;
}
