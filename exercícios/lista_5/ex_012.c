//Faça um programa que carregue uma matriz 3 x 5 com números inteiros e some cada uma das linhas, armazenando o resultado das somas em um vetor. A seguir, multiplique cada elemento da matriz pela soma da respectiva linha daquele elemento e mostre a matriz resultante.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int matriz[3][5], vetor[3];
    int i, j;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 3; i++){
        vetor[i] = 0; //Se não dizer que vale zero vai ter lixo de memória
        for(j = 0;j < 5; j++){
            printf("Insira o dado da posição %d, %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            vetor[i] += matriz[i][j];// armazenar o somatório de uma linha num vetor, como são três linhas é um vetor de tanho 3x1
        }
    }

    for(i = 0;i < 3; i++){
        for(j = 0;j < 5; j++){
            matriz[i][j] *= vetor[i];//multiplique cada elemento da matriz pela soma da respectiva linha
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}