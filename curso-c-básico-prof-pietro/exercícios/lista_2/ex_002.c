/*Faça um programa que receba o número de horas trabalhadas por um gestor e o valor do salário mínimo vigente. Crie uma função que calcule o salário a receber do gestor, seguindo as regras abaixo:
I - a hora trabalhada vale a metade do salário mínimo;
II - o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
III - o imposto equivale a 3% do salário bruto;
IV - o salário a receber equivale ao salário bruto menos o imposto.
Crie um algoritmo que invoque a respectiva função e mostre o salário a receber.*/
#include <stdio.h>
float salario_final(float horas, float salario);

int main(){
    float salario_minimo, horas_trabalhadas, salario;

    printf("Insira numero de horas trabalhadas:\n");
    scanf("%f", &horas_trabalhadas);
    printf("Insira valor do salario minimo:\n");
    scanf("%f", &salario_minimo);

    salario = salario_final(horas_trabalhadas,salario_minimo); 
    printf("Salario a receber: R$%.2f.\n", salario);
}

float salario_final(float horas, float salario){
    float horas_remuneradas, salario_bruto, imposto, salario_final;
    horas_remuneradas =  salario/2.0;
    salario_bruto = horas_remuneradas * horas;
    imposto = salario_bruto * 0.03;
    salario_final = salario_bruto - imposto;
    return salario_final;
}