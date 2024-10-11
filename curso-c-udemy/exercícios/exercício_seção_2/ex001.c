//Faça um programa que leia um número inteiro e o imprima.
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int number;

    printf("Digite um número: \n");
    scanf("%d", &number);

    printf("O número é %d.\n", number);
    
	return 0;
}