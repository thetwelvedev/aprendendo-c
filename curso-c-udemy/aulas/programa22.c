#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese"); 
	int n; // vari�vel que guarda seu valor na mem�ria

	//declarando
	int* p; //ponteiro � um valor que aponta para um endere�o de mem�ria

	printf("Informe um n�mero: ");
	scanf("%d", &n);

	//inicializando o ponteiro
	p = &n; //recebendo o endere�o de m�moria

	printf("O n�mero informado foi: %d\n", n);

	printf("Endere�o de mem�ria: %p\n", &n);

	printf("Endere�o do ponteiro: %p\n", p);

	printf("O valor que est� armazenado no endere�o de m�moria que o ponteiro p est� apontando �: %d\n", (*p));

	return 0;
}