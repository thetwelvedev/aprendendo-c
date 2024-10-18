// Faça um programa que tenha uma função que receba um vetor de inteiros como parâmetro e retorne o maior valor. 
#include <stdio.h>
#include <locale.h>

int maior_valor(int vetor[], int tamanho){
    int maior = 0;
    for(int i = 0; i < tamanho; i++){
        if(i == 0){
            maior = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}


int main(){
setlocale(LC_ALL, "portuguese");
	int vetor[10] = {12, 21, 13, 44, 51, 36, 47, 98, 19, 0};
    int tamanho;
    tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("O maior valor é %d\n", maior_valor(vetor, tamanho));

	return 0;
}