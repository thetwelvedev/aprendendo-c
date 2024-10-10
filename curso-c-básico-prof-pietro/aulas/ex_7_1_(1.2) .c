#include <stdio.h>

int main(){
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    //A matriz organizada
    for(int i = 0; i < 3; i++){//Vai imprimir as linhas
        for(int j = 0; j < 3; j++){//Vai imprimir as colunas
            if (j == 2){
                printf("%d|\n", mat[i][j]);
            } else if(j == 0){
                printf("|%d ", mat[i][j]);
            } else {
                printf("%d ", mat[i][j]);
            }
        }
    }
}