//Faça um programa que receba dois números e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais"
#include <stdio.h>

int main(){
    float n1, n2;

    printf("Digite um numero:\n");
    scanf("%f", &n1);
    printf("Digite um numero:\n");
    scanf("%f", &n2);

    if(n1 > n2){
        printf("O maior e: %.2f\n", n1);
    } else if(n2 > n1){
        printf("O maior e: %.2f\n", n2);
    } else {
        printf("Os numeros sao iguais");
    }
}