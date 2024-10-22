/* Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	//Declarando variavéis 
	int number = 10;
	float number2 = 12.5;
	char letter = 'A';

	//Declarando ponteiros
	int* pointer_int;
	float* pointer_float;
	char* pointer_char;

	printf("Antes da modificação\n");
	printf("Integer: %d\n", number);
	printf("Floater: %.2f\n", number2);
	printf("Character: %c\n", letter);
	
	//Inicializando o ponteiro
    pointer_int = &number; //recebendo o endereço de mémoria
	pointer_float = &number2;
	pointer_char = &letter;

	//Modificando os valores usando ponteiros
	*pointer_int = 12; //O valor que o ponteiro está apontando está recebendo um novo valor
	*pointer_float = 7.25; //Quando o ponteiro tá com * antes ele está se referindo ao valor e não ao espaço de memória
	*pointer_char = 'L';

	printf("Depois da modificação\n");
	printf("Integer: %d\n", number);
	printf("Floater: %.2f\n", number2);
	printf("Character: %c\n", letter);

	return 0;
}