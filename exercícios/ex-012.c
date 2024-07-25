//Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50, 20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba o menor número de notas possível.
#include <stdio.h>

int main(){
    int saque, nota100, nota50, nota20, nota10, nota5, nota2;

    printf("Digite o valor do saque:\n");
    scanf("%d", &saque);
    
    nota100 = saque / 100;
    saque -= (100*nota100);
    nota50 = saque / 50;
    saque -= (50*nota50);
    nota20 = saque / 20;
    saque -= (20*nota20);
    nota10 = saque / 10;
    saque -= (10*nota10);
    nota5 = saque / 5;
    saque -= (5*nota5);
    nota2 = saque / 2;
    

    printf("Numero de notas R$100,00: %d\n", nota100);
    printf("Numero de notas R$50,00: %d\n", nota50);
    printf("Numero de notas R$20,00: %d\n", nota20);
    printf("Numero de notas R$10,00: %d\n", nota10);
    printf("Numero de notas R$5,00: %d\n", nota5);
    printf("Numero de notas R$2,00: %d\n", nota2);
}   