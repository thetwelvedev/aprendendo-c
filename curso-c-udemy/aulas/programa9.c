#include <stdio.h>
#include <locale.h>
/*
Tipos de Dados

Tipos Alfanum�ricos:
	- Characteres;
	- Strings*;

	* Na linguagem C, n�o existe o tipo de dado String.

	Ex: String
	"abasfadfa fadsf adf asf af dasf asf asdf";

	Ex: Caractere
	's';

	"paulo\0";
*/
int main(){
	setlocale(LC_ALL, "portuguese"); 
	//declara��o de uma string em C
	char nome[50]; //49 caracteres

	printf("Qual � seu nome? ");
	gets(nome);

	printf("Seu nome � %s", nome);
}