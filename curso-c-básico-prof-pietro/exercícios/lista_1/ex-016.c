/*Faça um programa que receba o ano de nascimento de uma pessoa e ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos essa pessoa terá em 2030;*/
#include <stdio.h>

int main(){
    int  ano_de_nascimento, ano_atual, idade_atual, idade_2030;

    printf("Digite o ano de nascimento: \n");
    scanf("%d", &ano_de_nascimento);
    printf("Digite o ano atual: \n");
    scanf("%d", &ano_atual);
    idade_atual = ano_atual - ano_de_nascimento;
    idade_2030 = 2030 - ano_de_nascimento;

    printf("Idade atual: %d\n", idade_atual);
    printf("Idade em 2030: %d\n", idade_2030);;
}