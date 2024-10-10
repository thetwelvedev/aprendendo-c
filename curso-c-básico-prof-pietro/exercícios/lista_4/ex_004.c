//Desenvolva um algoritmo que receba um número N e imprima a tabuada de N, na tela.
#include <stdio.h>

int main(){
    int number, i = 1;
    printf("Digite um numero:\n");
    scanf("%d", &number);   
    while(i <= 10){
        printf("%d x %d = %d\n", number, i, number*i);
        i++;
    }
}