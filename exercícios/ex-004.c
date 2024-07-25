//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
#include <stdio.h>

int main(){
    float salario, novo_salario;

    printf("Digite o valor do seu salario:\n");
    scanf("%f", &salario);

    novo_salario = salario + (salario * 0.25);

    printf("Novo salario: R$ %.2f\n", novo_salario);
}