#include <stdio.h>

int main(){
	// 0000 0010
	int valor = 2;

	//deslocando bits para esquerda
	// 0000 1000 (8)
	valor = valor << 2;
	printf("%d\n", valor);

	// 0000 0100
	int valor2 = 4;

	//deslocando bits para direita
	// 0000 0001 (1)
	valor2 = valor2 >> 2;
	printf("%d\n", valor2);

	valor = 2;
	//negando
	//1111 1101 (-3)
	valor = ~valor;
	printf("%d\n", valor);

}
