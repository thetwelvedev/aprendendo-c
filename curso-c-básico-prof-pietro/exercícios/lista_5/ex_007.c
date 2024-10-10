// Desenvolva um algoritmo que preencha cada elemento de uma matriz 3x3 com o  quadrado do valor do índice da linha mais o valor do índice da coluna daquela posição. Ao final, o algoritmo deve mostrar a matriz, na tela.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int matriz[3][3];
    int i, j;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 3; i++){
        for(j = 0;j < 3; j++){
            matriz[i][j] = i*i + j;
            if(j == 0){
                printf("|%d ", matriz[i][j]);
            }
            else if(j == 1){
                printf("%d ", matriz[i][j]);
            }
            else{
                printf("%d|", matriz[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
