//Fa�a um programa que possua um vetor denominado A que armazene 6 n�meros inteiros. O programa deve executar os seguintes passos:
/*a) Atribula os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7;
b) Armazene em uma vari�vel inteira simples a soma entre os valores das posi��es A[0], A[1] e A[5] do vetor
e mostre na tela esta soma;
c) Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100;
d) Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	int A[6] = {1, 0, 5, -2, -5, 7}, soma;
	
	soma = A[0] + A[1] + A[5];
	printf("Soma: %d\n", soma);

	A[4] = 100;
	for (int i = 0; i <6; i++){
		printf("%d\n", A[i]);
	}

	return 0;
}