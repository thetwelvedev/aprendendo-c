//Fa�a um programa que leia um vetor de 10 posi��es. Conte e mostre quantos valores pares ele possui.
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int valor[10];

	for (int i = 0; i <10; i++){
		printf("Digite um n�mero: ");
		scanf("%d", &valor[i]);
	}
	int contador = 0;
	for (int i = 0; i <10; i++){
		if(valor[i] % 2 == 0){
			printf("%d\n", valor[i]);
			contador ++;
		}
	}
	printf("Tem %d n�meros pares!\n", contador);

	return 0;
}