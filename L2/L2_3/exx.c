#include <stdio.h>

int main() {
	int n = 0;
	int qtd = 0;
	int i = 0;
	int maior = 0, menor = 0, par = 0, impar = 0; 
	float media = 0.0, soma = 0.0;

	scanf("%d", &qtd);

	for(i = 0; i < qtd; i++) {
		scanf("%d", &n);
		if(n % 2 == 0) {
			par = par + 1;
		} else {
			impar = impar + 1;
		}

		if(i == 0) {
			maior = n;
			menor = n;
		}

		if(n > maior) {
			maior = n;
		}

		if(n < menor) {
			menor = n;
		}
		
		soma = soma + n;
	}
	media = soma / qtd;
	printf("%d %d %d %d %.6f", maior, menor, par, impar, media);

	return 0;
}