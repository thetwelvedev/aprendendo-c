#include <stdio.h>
#include <locale.h>

//aula 02 escrevendo fun��es
// main -> principal

// Estrutura das fun��es
/*
 - tipo de retorno
 - nome
 - par�metros de entrada (opcional)
 - implementa��o (corpo da fun��o)
 - retorno (opcional)
*/

void mensagem(){
	printf("Bem-vindo!\n");
}

int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}

// 'a'
// 97
void proximo_char(char caractere){
	printf("%c", caractere+1);
}

int main(){
	setlocale(LC_ALL, "portuguese");
	printf("Ol�...\n");
	mensagem();

	printf("Retorno = %d\n", soma(4, 6));

	char cara = 97;
	proximo_char(cara);
	return 0;
}