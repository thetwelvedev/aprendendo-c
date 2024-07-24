//Faça um programa que receba quatro números inteiros, calcule e mostre a soma desses números.
#include <stdio.h>

int main(){ 
    int a, b, c, d, soma;

    printf("Digite um numero:\n");
    scanf("%d", &a);
    printf("Digite um numero:\n");
    scanf("%d", &b);
    printf("Digite um numero:\n");
    scanf("%d", &c);
    printf("Digite um numero:\n");
    scanf("%d", &d);

    soma = a + b + c + d;

    printf("Resultado:\nSoma: %d", soma);
}