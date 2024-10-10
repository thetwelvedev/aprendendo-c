/*Um funcionário de uma empresa recebe aumento salarial anualmente. Sabe-se que:
a) esse funcionário foi contratado em 2015, com salário inicial de R$ 1.000,00;
b) em 2016 recebeu aumento de 1,5% sobre seu salário inicial;
c) a partir de 2017 (inclusive), os aumentos salariais sempre corresponderam ao dobro da porcentagem do ano anterior.*/
#include <stdio.h>

int main(){
    float salario = 1000, aumento = 0.015;
    int ano_de_entrada = 2015, ano_atual;

    printf("Qual o ano atual?\n");
    scanf("%d", &ano_atual);
    while(ano_atual > ano_de_entrada){
        salario += (salario*aumento);
        aumento *= 2;
        ano_atual--;
    }
    printf("Salario atual: R$%.2f", salario);
}