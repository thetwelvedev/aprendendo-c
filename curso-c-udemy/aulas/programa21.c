//Mostrando que fun��o nesse estado s� pega o valor e coloca num novo espa�o de m�moria
#include <stdio.h>
#include <locale.h>
//hardware/l�gico/mem�ria

//endere�o de mem�ria como par�metro de entrada
void incrementa(int contador){
	printf("\nFun��o incrementa\n");
	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", contador); //valor
	printf("O endere�o de mem�ria � %d\n", &contador); //endere�o de mem�ria


	printf("Depois de incrementar.\n");
	// valor = valor + 1;
	// valor = valor - 1;
	//valor++; s� incrementa depois
	//valor--;
	//+=valor;
	//--valor; decrementa antes
	printf("O contador vale %d\n", ++contador);
	printf("O endere�o de mem�ria � %d\n", &contador); 
	
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

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endere�o de mem�ria � %d\n", &contador);

	//c�pia por valor
	incrementa(contador);

	return 0;
}