/*Fa�a um programa que contenha duas vari�veis inteiras. Leia estas vari�veis do teclado. Em seguida, 
compare seus endere�os e exiba o conte�do do maior endere�o.*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int a, b;

	printf("Digite um n�mero: ");
	scanf("%d", &a);
	printf("Digite um n�mero: ");
	scanf("%d", &b);

	printf("O valor %d est� no endere�o %p e com %u bytes\n", a, &a, sizeof(a));
	printf("O valor %d est� no endere�o %p e com %u bytes\n", b, &b, sizeof(b));

	if(&a > &b){ //Comparando os endere�os
		printf("'a' tem maior endere�o: %d\n", a); //conte�do
	} else {
		printf("'b' tem maior endere�o: %d\n", b);
	}
	
	return 0;
}