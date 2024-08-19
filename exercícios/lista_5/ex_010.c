//Faça um programa que carregue uma matriz 2x2, calcule e mostre uma matriz resultante que será a própria matriz digitada multiplicada pelo maior elemento da matriz.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int matriz[2][2];
    int i, j, maior = 0;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 2; i++){
        for(j = 0;j < 2; j++){
            printf("Insira o dado da posição %d, %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            if(maior == 0){
                maior = matriz[i][j];
            }
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }
    for(i = 0;i < 2; i++){
        for(j = 0;j < 2; j++){
            matriz[i][j] *= maior;
            if(j == 0){
                printf("|%d ", matriz[i][j]);
            }
            else if(j == 1){
                printf("%d|", matriz[i][j]);
            }
        }
        printf("\n");
    }
}