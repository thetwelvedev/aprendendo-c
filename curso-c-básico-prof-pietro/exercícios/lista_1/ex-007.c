//Faça um programa que receba o salário-base de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que esse funcionário teve gratificação de R$ 600,00 e paga imposto de 10% sobre o salário base.
#include <stdio.h>

int main(){
    float salario, gratificacao, imposto,  salario_final;

    printf("Digite o valor do seu salario:\n");
    scanf("%f", &salario);
    
    gratificacao =  600.00;
    imposto =  salario * 0.10;
    salario_final = salario + gratificacao - imposto;

    printf("Novo salario: R$ %.2f\n", salario_final);
}