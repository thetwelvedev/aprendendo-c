//Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.
#include <stdio.h>
#include <math.h>

int main(){
    int  valor1, valor2, valor_elevado;

    printf("Digite um numero: \n");
    scanf("%d", &valor1);
    printf("Digite um numero: \n");
    scanf("%d", &valor2);

    valor_elevado = pow(valor1, valor2);

    printf("Resultado: %d", valor_elevado);
}