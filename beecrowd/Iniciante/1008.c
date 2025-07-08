/*Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. 
A seguir, mostre o número e o salário do funcionário, com duas casas decimais.*/
#include <stdio.h>
 
int main() {
 
    int numero_funcionario, horas_trabalhadas;
    float valor_por_hora_trabalhada, salario;
    scanf("%d", &numero_funcionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%f", &valor_por_hora_trabalhada);
    

    salario = horas_trabalhadas*valor_por_hora_trabalhada;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", numero_funcionario, salario);
 
    return 0;
}