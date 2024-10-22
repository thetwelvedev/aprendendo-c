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

	printf("valores[0] vale %d e endere�o de mem�ria � %p\n", valores[0], valores[0]); //Est� dando endere�o de m�moria n�merico n�o hexadecimal
	printf("*(valores) vale %d e endere�o de mem�ria � %p\n", *(valores), *(valores)); //Quando voc� coloca um ponteiro num array ele sempre aponta para primeira posi��o, ent�o ao somar +1
	//por exemplo voc� acaba avan�ando a posi��o no array

	printf("*(valores+1) vale %d e endere�o de mem�ria � %p\n", *(valores+1), *(valores+1)); //Ao somar +1 o ponteiro vai para segunda posi��o j� que ele aponta sempre para primeira
	printf("*(valores+2) vale %d e endere�o de mem�ria � %p\n", *(valores+2), *(valores+2));
	printf("*(valores+3) vale %d e endere�o de mem�ria � %p\n", *(valores+3), *(valores+3));
	printf("*(valores+4) vale %d e endere�o de mem�ria � %p\n", *(valores+4), *(valores+4));
	return 0;
	//%zu � para inprimir valor do tipo size_t que � unsigned 
}