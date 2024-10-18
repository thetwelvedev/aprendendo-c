#include <stdio.h>
#include <locale.h>
#include "ajuda.h"

int main(){
	setlocale(LC_ALL, "portuguese");
	int n1, n2, ret_s, ret_m;

	mensagem();

	printf("Informe o primeiro número: ");
	scanf("%d", &n1);

	printf("Informe o segundo número: ");
	scanf("%d", &n2);

	ret_s = soma(n1, n2);
	printf("A soma de %d com %d é %d\n", n1, n2, ret_s);

	ret_m = multiplicacao(n1, n2);
	printf("A multiplicação de %d com %d é %d\n", n1, n2, ret_m);

	return 0;
}
/*PARA RODAR MÚLTIPLOS ARQUIVOS:
gcc programa20.c ajuda.c ajuda.h -o programa20.exe
Nesse caso são os arquivos que eu quero rodar*/