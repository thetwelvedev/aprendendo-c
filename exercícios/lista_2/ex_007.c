/*Crie um procedimento que receba a quantidade de dinheiro em reais que uma pessoa que vai viajar possui. Essa pessoa vai passar por vários países
 e precisa converter seu dinheiro em dólares, euro e libra esterlina. Sabe-se que a cotação do dólar é de R$ 4,00, do euro é R$ 4,25 e do iene é 
 R$ 0,10. O procedimento deverá fazer a leitura dos dados do usuário e exibir o resultado das conversões diretamente, sem passagem de parâmetros. 
 Desenvolva um algoritmo que invoque o procedimento para realizar os cálculos.*/
#include <stdio.h>
void cotacao(){
    float reais, dolar, euro, iene; 
    printf("Insira o valor em reais:\n"); 
    scanf("%f", &reais); 
    dolar = reais/4.0;
    euro = reais/4.25;
    iene = reais/0.10;
    printf("Em dolares: R$%.2f.\n", dolar); 
    printf("Em euros: R$%.2f.\n", euro); 
    printf("Em ienes: R$%.2f.\n", iene);
}

int main(){
    cotacao();
}