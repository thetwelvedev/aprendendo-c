//Faça um programa que leia três valores e apresente como resultado a soma dos quadrados dos valores lidos.
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese"); 

    int number1, number2, number3, soma_quadrados;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &number1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &number2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &number3);

    soma_quadrados = (number1 * number1) + (number2 * number2) + (number3 * number3);

    printf("A soma dos quadrados dos valores lidos é: %d\n", soma_quadrados);
    
    return 0;
}