//Desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1 e 10 (inclusive).
#include <stdio.h>

int main(){
    int i = 1, soma;

    while (i <= 10){
        soma += i;
        i++;
    }
    printf("Somatorio: %d", soma); 
}