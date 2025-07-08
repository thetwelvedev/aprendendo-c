/*Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro). 
Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.*/
#include <stdio.h>
 
int main() {
    
    double salario_fixo, total_de_vendas, salario_final;
    char nome[10];
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_de_vendas);
    salario_final = salario_fixo + (0.15*total_de_vendas);
    printf("TOTAL = R$ %.2lf\n", salario_final);
 
    return 0;
}