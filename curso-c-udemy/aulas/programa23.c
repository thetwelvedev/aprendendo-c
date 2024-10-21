#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	/*  0   1    2    3   4
	 *----------------------
	 *|   |    |    |   |  |
	 *----------------------
	 *
	*/
	int valores[5];

	for(int i = 0; i < 5; i++){
		printf("Informe o %d/5 valor: ", (i+1));
		scanf("%d", &valores[i]);
	}

	printf("Os valores informados foram: \n");
	for(int i = 0; i < 5; i++){
		printf("%d\n", valores[i]);
	}

	printf("%p %d\n", &valores[0], valores[0]);
	printf("%p %d\n", valores, valores[0]); //O endereço de mémoria do vetor é o mesmo da primeira posição do vetor

	return 0;
}