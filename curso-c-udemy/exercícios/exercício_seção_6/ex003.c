//Fa�a um programa que leia um vetor de 10 posi��es e atribua valor 0 para todos os elementos que possu�rem valores negativos.
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int valor[10];

	for (int i = 0; i <10; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &valor[i]);
	}
	for (int i = 0; i <10; i++){
		if(valor[i] < 0){
			valor[i] = 0;
		}
		printf("%d\n", valor[i]);
	}
	
	return 0;
}