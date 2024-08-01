//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário desse funcionário, acrescido de bonificação e de auxílio-escola.
#include <stdio.h>

int main(){
    float salario, bonificacao, auxilio_escola, novo_salario;

    printf("Digite seu salario:\n");
    scanf("%f", &salario);
    if(salario <= 600){
        auxilio_escola = 150;
    } else {
        auxilio_escola = 600;
    }
    if(salario <= 500){
        bonificacao = salario * 0.05;
        novo_salario = salario + bonificacao + auxilio_escola;
        printf("Salario: R$%.2f", novo_salario);
    } else if(salario > 500 && salario <= 1200){
        bonificacao = salario * 0.12;
        novo_salario = salario + bonificacao + auxilio_escola;
        printf("Salario: R$%.2f", novo_salario);
    } else {
        bonificacao = 0;
        novo_salario = salario + bonificacao + auxilio_escola;
        printf("Salario: R$%.2f", novo_salario);
    }
}