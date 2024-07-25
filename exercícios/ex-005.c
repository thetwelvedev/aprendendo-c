//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.
#include <stdio.h>

int main(){
    float salario, percentual_aumento, aumento,  novo_salario;

    printf("Digite o valor do seu salario:\n");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento:\n");
    scanf("%f", &percentual_aumento);

    aumento = salario * (percentual_aumento/100);
    novo_salario = salario + aumento;

    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novo_salario);
}