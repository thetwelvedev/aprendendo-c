//
#include <stdio.h>
#include <locale.h>
//hardware/l�gico/mem�ria

//endere�o de mem�ria como par�metro de entrada
void incrementa(int* contador){ //Agora n�o vai mais receber o valor e sim o endere�o de m�moria
	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", (*contador)); //agora o valor � acessado com esse asterisco
	printf("O endere�o de mem�ria � %d\n", contador); //e quando deixa sozinho a vari�vel d� o endere�o de mem�ria


	printf("Depois de incrementar.\n");
	// valor = valor + 1;
	// valor = valor - 1;
	//valor++; s� incrementa depois
	//valor--;
	//+=valor;
	//--valor; decrementa antes
	printf("O contador vale %d\n", ++(*contador));
	printf("O endere�o de mem�ria � %d\n", contador); 
	
}

int main(){
	setlocale(LC_ALL, "portuguese"); 
	// quando declaramos uma vari�vel, a linguagem c
	// aloca um espaco em mem�ria para colocar
	// este valor.
	int contador = 10;

	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de mem�ria � %d\n", &contador);

	//c�pia por valor
	incrementa(&contador); //Tem que passar o endere�o de m�moria como par�metro
	//scanf("%d", &contador); - j� usamos para colocarmos no espa�o de m�moria

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de mem�ria � %d\n", &contador);

	return 0;
}