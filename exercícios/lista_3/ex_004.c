//Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.
#include <stdio.h>

int main(){
    float n1, n2, resultado;

    printf("Digite um numero:\n");
    scanf("%f", &n1);
    printf("Digite um numero:\n");
    scanf("%f", &n2);

    if(n1 == n2){
        resultado = n1*n2;
        printf("Multiplicacao: %.2f", resultado);
    } else if(n1 > n2) {
        resultado = n1 - n2;
        printf("Subtracao: %.2f", resultado);
    } else{
        resultado = n1 + n2;
        printf("Soma: %.2f", resultado);
    }
}