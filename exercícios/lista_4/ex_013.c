//Desenvolva um algoritmo que mostre a tabuada de todos os números inteiros compreendidos entre 1 e 10 (inclusive).
#include <stdio.h>

int main(){
    int i, j;
    for( i = 1; i <= 10; i++){
        for(j = 1; j <= 10; j++){
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n");
    }
}