//Aula sobre vari�veis
#include <stdio.h>
#include <locale.h>

int main(){//a chave delimita um bloco de c�digo (in�cio do bloco)
setlocale(LC_ALL, "portuguese"); //tem que ser com o ISO 8859-1
	//declarando vari�veis
	int idade; //inteiro

	//declarando e inicializando vari�veis
	//int idade = 0;

	//Fun��o para escrever algo na sa�da padr�o (console)
	printf("Qual � a sua idade? \n"); //o ponto e v�rgula ao final finaliza um comando

	//Receber dados
	scanf("%d", &idade);

	//Sa�da
	printf("A sua idade � %d\n", idade);

	return 0;
}//fim do bloco
