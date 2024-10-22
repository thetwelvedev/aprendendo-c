/*Faça um programa que contenha duas variáveis inteiras. Leia estas variáveis do teclado. Em seguida, 
compare seus endereços e exiba o conteúdo do maior endereço.*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int a, b;

	printf("Digite um número: ");
	scanf("%d", &a);
	printf("Digite um número: ");
	scanf("%d", &b);

	printf("O valor %d está no endereço %p e com %u bytes\n", a, &a, sizeof(a));
	printf("O valor %d está no endereço %p e com %u bytes\n", b, &b, sizeof(b));

	if(&a > &b){ //Comparando os endereços
		printf("'a' tem maior endereço: %d\n", a); //conteúdo
	} else {
		printf("'b' tem maior endereço: %d\n", b);
	}
	
	return 0;
}