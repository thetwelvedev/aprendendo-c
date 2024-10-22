/* Fa�a um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as vari�veis aos ponteiros (use &).
Modifique os valores de cada vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a modifica��o.*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	//Declarando variav�is 
	int number = 10;
	float number2 = 12.5;
	char letter = 'A';

	//Declarando ponteiros
	int* pointer_int;
	float* pointer_float;
	char* pointer_char;

	printf("Antes da modifica��o\n");
	printf("Integer: %d\n", number);
	printf("Floater: %.2f\n", number2);
	printf("Character: %c\n", letter);
	
	//Inicializando o ponteiro
    pointer_int = &number; //recebendo o endere�o de m�moria
	pointer_float = &number2;
	pointer_char = &letter;

	//Modificando os valores usando ponteiros
	*pointer_int = 12; //O valor que o ponteiro est� apontando est� recebendo um novo valor
	*pointer_float = 7.25; //Quando o ponteiro t� com * antes ele est� se referindo ao valor e n�o ao espa�o de mem�ria
	*pointer_char = 'L';

	printf("Depois da modifica��o\n");
	printf("Integer: %d\n", number);
	printf("Floater: %.2f\n", number2);
	printf("Character: %c\n", letter);

	return 0;
}