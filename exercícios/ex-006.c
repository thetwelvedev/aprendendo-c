//Faça um programa que receba o salário-base de um funcionário, calcule e mostre o salário a receber, sabendo-se que esse funcionário tem gratificação de 5% sobre o salário-base e paga imposto de 7% sobre o salário-base.
#include <stdio.h>

int main(){
    float salario, gratificacao, imposto,  salario_final;

    printf("Digite o valor do seu salario:\n");
    scanf("%f", &salario);
    
    gratificacao =  salario * 0.05;
    imposto =  salario * 0.07;
    salario_final = salario + gratificacao - imposto;

    printf("Novo salario: R$ %.2f\n", salario_final);
}