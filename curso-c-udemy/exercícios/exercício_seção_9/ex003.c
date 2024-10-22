/*Faça um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética 
de ponteiros, leia este array do teclado e imprima o dobro de cada valor lido.*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");

	int vetor[5];//O ponteiro sempre aponta para primeira posição do array, então se somar +1 por exemplo ao array com ponteiro ele vai andar de posição no array

	for(int i = 0; i < 5; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
	}

	for(int i = 0; i < 5; i++){
		int dobro = *(vetor+i) * 2;
		printf("Valor normal: %d\nDobro: %d\n\n",*(vetor+i), dobro); //Aqui cada loop ele vai somar +1 no ponteiro, onde inicialmente ele aponta para primeira posição e a cada iteração vai andando no vetor
	}
	
    
	return 0;
}