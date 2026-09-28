#define DOIS 2

#include <stdio.h>

int main(){
	float nota1 = 0.0, nota2 = 0.0;
	float media = 0.0;

	scanf("%f %f", &nota1, &nota2);

	media = (nota1 + nota2)/DOIS;

	if(media >= 7) {
		printf("%.1f - Aprovado", media);

	} else if(media < 5) {
		printf("%.1f - Reprovado", media);

	} else {
		printf("%.1f - De Recuperacao", media);
	}

	return 0;
}