#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int x = 10, y = 5, z = 7, k = 7;
	
	printf("Os operadores relacionais sao usados para fazer comparacoes\n");
	printf("Quando o resultado da comparacao eh FALSO retornam 0 (zero)\n");
	printf("Quando o resultado da comparacao eh VERDADEIRO retornam 1 \n");
	
	printf("\nValor de x = %d   ", x);
	printf("Valor de y = %d \n  ", y);
	printf("Valor de z = %d   ", z);
	printf("Valor de k = %d \n  ", k);
	
	printf("\nExemplo 1: x > y : %d", x > y);
	printf("\nExemplo 2: x < y : %d \n", x < y);
	
	printf("\nExemplo 3: z == k : %d", z == k);
	printf("\nExemplo 4: z != k : %d", z != k);
	
	printf("\nExemplo 5: z >= x : %d", z >= x);
	printf("\nExemplo 6: z <= x : %d", z <= x);
	
	printf("\nExemplo 7: x * z : %d", x * z);
	printf("\nExemplo 8: x / z : %d", x / z);
	
	return (0);
}
