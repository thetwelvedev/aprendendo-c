//Faça um programa que receba um número inteiro e verifique se esse número é par ou ímpar.
#include <stdio.h>

int main(){
    int n1;

    printf("Digite um numero:\n");
    scanf("%d", &n1);
    

    if(n1 % 2 == 0){
        printf("par");
    } else {
        printf("impar");
    }
}