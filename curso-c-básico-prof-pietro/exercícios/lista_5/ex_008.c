//Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3. Depois de a matriz ter sido populada, o algoritmo deverá imprimir a matriz da seguinte forma: os dados da diagonal principal devem ser impressos normalmente e os dados fora da diagonal principal devem substituídos por zero.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int matriz[3][3];
    int i, j;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 3; i++){
        for(j = 0;j < 3; j++){
            printf("Insira o dado da posição %d, %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0;i < 3; i++){
        for(j = 0;j < 3; j++){
            if(i == j){
                printf("%d ", matriz[i][j]);
            } else {
                matriz[i][j] = 0;
                printf("%d ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}