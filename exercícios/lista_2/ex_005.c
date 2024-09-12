/*Sabe-se que o quilowatt de energia custa um milésimo do salário mínimo. 
Faça um procedimento que receba o valor do salário mínimo e quantidade de quilowatts consumida por uma residência. 
O procedimento deve calcular e retornar através de passagem de parâmetros por referência:
a) o valor, em reais, de cada quilowatt;
b) o valor, em reais, a ser pago por essa residência;
c) o valor, em reais, a ser pago com desconto de 15%.
Sabendo disso, desenvolva um algoritmo que peça para o usuário inserir o valor do salário mínimo e a quantidade de quilowatts consumida. 
Invoque o respectivo procedimento e mostre, na tela, as informações dos itens a), b) e c).*/
#include <stdio.h>

float valor_kw(float salario){ 
    float kw_valor = (salario/1000.0);
    return kw_valor;
}
float conta_residencia(float valor_kw, float kw){
    float valor_conta = valor_kw * kw;
    return valor_conta;
}
float conta_desconto(float conta){
    float valor_desconto = conta - (conta * 0.15);
    return valor_desconto;
}
int main(){
    float salario_min, kw_gasto; 
    printf("Insira o salario minimo:\n"); 
    scanf("%f", &salario_min); 
    printf("Insira a quantidade de KW gastos:\n"); 
    scanf("%f", &kw_gasto);

    printf("Valor de 1 KW (em R$): %2.f\n", valor_kw(salario_min));
    printf("Valor a ser pago (em R$): %2.f\n", conta_residencia(valor_kw(salario_min), kw_gasto));
    printf("Valor com desconto de 15%% (em R$):%2.f\n", conta_desconto(conta_residencia(valor_kw(salario_min), kw_gasto)));
}