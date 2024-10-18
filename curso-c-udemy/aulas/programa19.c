#include <stdio.h>
#include <locale.h>

//Prot�tipo de fun��o
/*
 * Assinatura das fun��es
 *
 * - tipo de retorno
 * - nome
 * - par�metros de entrada (opcional)
*/
int soma(int num1, int num2);

void mensagem();

int main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2, ret;

	printf("Informe o primeiro n�mero: ");
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	scanf("%d", &n2);

	ret = soma(n1, n2);

	printf("A soma de %d com %d � %d\n", n1, n2, ret);

	mensagem();

	return 0;
}

int soma(int num1, int num2){
	return num1 + num2;
}

void mensagem(){
	printf("Bem-vindo...");
}