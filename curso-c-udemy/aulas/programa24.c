#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	/*  0   1    2    3   4
	 *----------------------
	 *| 1 | 2 |  3 | 4 | 5 |
	 *----------------------
	 * int = 4 bytes
	 * bit 0 / 1
	 * byte 0000 0001
	 * 4 bytes = 0000 0000 0000 0000 0000 0000 0000 0001
	*/
	int valores[5] = {1, 2, 3, 4, 5};

	for(int i = 0; i < 5; i++){
		printf("O valor %d tem %ld bytes\n", valores[i], sizeof(valores[i])); // %ld - long int 
	}
	printf("O array valores possui %ld bytes\n", sizeof(valores));

	printf("valores[0] vale %d e endereço de memória é %p\n", valores[0], valores[0]); //Está dando endereço de mémoria númerico não hexadecimal
	printf("*(valores) vale %d e endereço de memória é %p\n", *(valores), *(valores)); //Quando você coloca um ponteiro num array ele sempre aponta para primeira posição, então ao somar +1
	//por exemplo você acaba avançando a posição no array

	printf("*(valores+1) vale %d e endereço de memória é %p\n", *(valores+1), *(valores+1)); //Ao somar +1 o ponteiro vai para segunda posição já que ele aponta sempre para primeira
	printf("*(valores+2) vale %d e endereço de memória é %p\n", *(valores+2), *(valores+2));
	printf("*(valores+3) vale %d e endereço de memória é %p\n", *(valores+3), *(valores+3));
	printf("*(valores+4) vale %d e endereço de memória é %p\n", *(valores+4), *(valores+4));
	return 0;
	//%zu É para inprimir valor do tipo size_t que é unsigned 
}