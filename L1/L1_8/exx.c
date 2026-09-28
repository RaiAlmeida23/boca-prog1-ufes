#include <stdio.h>

int main() {
	char letra = 0;

	scanf("%c", &letra);

	if(letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {
		printf("Vogal");
	} else {
		printf("Nao vogal");
	}

	return 0;
}