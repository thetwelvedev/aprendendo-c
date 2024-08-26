/*O custo de um carro novo ao consumidor final é o preço de fábrica somado ao percentual de lucro do distribuidor, acrescido dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Em cada item, crie uma função distinta para calcular e retornar:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.
Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada uma das funções, mostrando o lucro do distribuidor, os impostos e o valor final do veículo.*/
#include <stdio.h>

float lucroDoDistribuidor(float preco, float porcetagem_distribuidor);
float impostoFinal(float preco, float porcetagem_imposto);
float valorFinal(float valor_carro, float lucro_distribuidor, float imposto);

int main(){
    float preco_de_fabrica, porcetagem_lucro, porcetagem_imposto;
    printf("Insira o preco de fabrica: ");
    scanf("%f", &preco_de_fabrica);
    printf("Insira a porcetagem de lucro do distribuidor: ");
    scanf("%f", &porcetagem_lucro);
    printf("Insira a porcetagem de impostos: ");
    scanf("%f", &porcetagem_imposto);

    printf("Lucro do distribuidor: R$ %.2f\n", lucroDoDistribuidor(preco_de_fabrica, porcetagem_lucro));
    printf("Impostos: R$ %.2f\n", impostoFinal(preco_de_fabrica, porcetagem_imposto));
    printf("Valor final: R$ %.2f\n", valorFinal(preco_de_fabrica, lucroDoDistribuidor(preco_de_fabrica, porcetagem_lucro), impostoFinal(preco_de_fabrica, porcetagem_imposto)));
}

float lucroDoDistribuidor(float preco, float porcetagem_distribuidor){
    return preco * (porcetagem_distribuidor/100.0);
}
float impostoFinal(float preco, float porcetagem_imposto){
    return preco * (porcetagem_imposto/100.0);
}
float valorFinal(float valor_carro, float lucro_distribuidor, float imposto){
    return valor_carro + lucro_distribuidor + imposto;
}