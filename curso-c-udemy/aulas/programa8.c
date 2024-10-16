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
*/
int main(){
	setlocale(LC_ALL, "portuguese"); 
	char opcao;
	printf("Informe uma op��o: \n");
	printf("a - Saldo da conta, \n");
	printf("b - Extrato da conta. \n");
	printf("c - Limite da conta, \n");
	scanf("%c", &opcao);

	if(opcao == 'a'){
		printf("Seu saldo � ....\n");
	}else if(opcao == 'b'){
		printf("Extrado da conta...\n");
	}else if(opcao == 'c'){
		printf("Seu limite � ....\n");
	}else{
		printf("Op��o desconhecida...\n");
	}

	//Gerar um alfabeto completo com um loop
	for(int i = 97; i <= 122; i++){
		printf("%c\n", i);
	}

	return 0;
}