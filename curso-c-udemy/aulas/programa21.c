//
#include <stdio.h>
#include <locale.h>
//hardware/lógico/memória

//endereço de memória como parâmetro de entrada
void incrementa(int* contador){ //Agora não vai mais receber o valor e sim o endereço de mémoria
	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", (*contador)); //agora o valor é acessado com esse asterisco
	printf("O endereço de memória é %d\n", contador); //e quando deixa sozinho a variável dá o endereço de memória


	printf("Depois de incrementar.\n");
	// valor = valor + 1;
	// valor = valor - 1;
	//valor++; só incrementa depois
	//valor--;
	//+=valor;
	//--valor; decrementa antes
	printf("O contador vale %d\n", ++(*contador));
	printf("O endereço de memória é %d\n", contador); 
	
}

int main(){
	setlocale(LC_ALL, "portuguese"); 
	// quando declaramos uma variável, a linguagem c
	// aloca um espaco em memória para colocar
	// este valor.
	int contador = 10;

	printf("Antes de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memória é %d\n", &contador);

	//cópia por valor
	incrementa(&contador); //Tem que passar o endereço de mémoria como parâmetro
	//scanf("%d", &contador); - já usamos para colocarmos no espaço de mémoria

	printf("Depois de incrementar.\n");
	printf("O contador vale %d\n", contador);
	printf("O endereço de memória é %d\n", &contador);

	return 0;
}