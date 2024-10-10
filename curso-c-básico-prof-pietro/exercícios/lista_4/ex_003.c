//Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.
#include <stdio.h>

int main(){
    int fat = 1, number, i;
    printf("Digite um numero:\n");
    scanf("%d", &number); 
    i = number;  
    while(i > 1){
        fat *= i;
        i--;
    }
    printf("O fatorial de %d: %d\n", number, fat);
}