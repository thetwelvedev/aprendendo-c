//Fa�a um programa que leia um n�mero inteiro e o imprima.
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int number;

    printf("Digite um n�mero: \n");
    scanf("%d", &number);

    printf("O n�mero � %d.\n", number);
    
	return 0;
}