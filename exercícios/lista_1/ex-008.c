//Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento.
#include <stdio.h>

int main(){
    float deposito, taxa, rendimento, valor_com_rendimento;

    printf("Digite o valor do deposito:\n");
    scanf("%f", &deposito);
    printf("Digite a porcentagem da taxa:\n");
    scanf("%f", &taxa);
    
    taxa = taxa/100;
    rendimento = deposito * taxa;
    valor_com_rendimento = deposito + rendimento;

    printf("Rendimento: R$ %.2f\n", rendimento);
    printf("Valor com rendimento: R$ %.2f\n", valor_com_rendimento);
}