//Aula sobre variáveis
#include <stdio.h>
#include <locale.h>

int main(){//a chave delimita um bloco de código (início do bloco)
setlocale(LC_ALL, "portuguese"); //tem que ser com o ISO 8859-1
	//declarando variáveis
	int idade; //inteiro

	//declarando e inicializando variáveis
	//int idade = 0;

	//Função para escrever algo na saída padrão (console)
	printf("Qual é a sua idade? \n"); //o ponto e vírgula ao final finaliza um comando

	//Receber dados
	scanf("%d", &idade);

	//Saída
	printf("A sua idade é %d\n", idade);

	return 0;
}//fim do bloco
