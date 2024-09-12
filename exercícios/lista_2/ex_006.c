/*Faça um procedimento que receba um número real, calcule e retorne:
a) a parte inteira desse número;
b) a parte fracionária desse número.
Crie um algoritmo que peça para o usuário inserir o número real e, em seguida, calcule e mostre o que se pede nos itens a) e b).*/
#include <stdio.h>
#include <math.h>
int parte_inteira(float numero){
    return (int)numero;
}
float parte_fracinaria(float numero){;
    float resto = numero - (int)numero;
    return resto;
}
int main(){
    float numero;
    printf("Insira um numero real:\n");
    scanf("%f", &numero);

    printf("Parte inteira: %d \n", parte_inteira(numero));
    printf("Parte facionaria: %.2f\n", parte_fracinaria(numero));
}