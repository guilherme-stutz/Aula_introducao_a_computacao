#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float av;
	float simulado1;
	float simulado2;
	float notafinal;
	
	printf("Digite a nota da AV: ");
	scanf("%f", &av);
	
	printf("Digite a nota do simulado 1: ");
	scanf("%f", &simulado1);
	
	printf("Digite a nota do simulado 2: ");
	scanf("%f", &simulado2);
	
	notafinal = av + simulado1 + simulado2;
	
	if(notafinal > 10) {
		printf("Nota final: 10");
	} else {
		printf("Nota final: %.1f\n", notafinal);
	}
	return 0;
}
