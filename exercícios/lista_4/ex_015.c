/*Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor de E, conforme a fórmula a seguir:
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/
#include <stdio.h>

int main(){
    int n, i, fat;
    float e = 1;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        fat = 1; //Para não acumular para o próximo loop
        for(int j = 1; j <= i; j++){
            fat *= j;
        }
        e += 1.0/fat;
    }
    printf("Resultado: %.3f\n", e);
}