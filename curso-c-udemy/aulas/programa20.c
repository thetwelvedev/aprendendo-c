#include <stdio.h>
#include <locale.h>
#include "ajuda.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe o primeiro n�mero: ");
	scanf("%d", &n1);

	printf("Informe o segundo n�mero: ");
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("A soma de %d com %d � %d\n", n1, n2, ret_s);

	ret_m = multiplicacao(n1, n2);
	printf("A multiplica��o de %d com %d � %d\n", n1, n2, ret_m);

	return 0;
}
/*PARA RODAR M�LTIPLOS ARQUIVOS:
gcc programa20.c ajuda.c ajuda.h -o programa20.exe
./programa20.exe -> s� roda no terminal
Nesse caso s�o os arquivos que eu quero rodar*/