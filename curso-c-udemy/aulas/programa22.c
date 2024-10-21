#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese"); 
	int n; // variável que guarda seu valor na memória

	//declarando
	int* p; //ponteiro é um valor que aponta para um endereço de memória

	printf("Informe um número: ");
	scanf("%d", &n);

	//inicializando o ponteiro
	p = &n; //recebendo o endereço de mémoria

	printf("O número informado foi: %d\n", n);

	printf("Endereço de memória: %p\n", &n);

	printf("Endereço do ponteiro: %p\n", p);

	printf("O valor que está armazenado no endereço de mémoria que o ponteiro p está apontando é: %d\n", (*p));

	return 0;
}