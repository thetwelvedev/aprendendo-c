//Desenvolva um algoritmo que receba dois números inteiros positivos A e B. Exiba na tela todos os números inteiros compreendidos entre A e B, excluindo os próprios A e B. Suponha que o usuário respeite o enunciado e insira valores válidos para A e B.
#include <stdio.h>

int main(){
    int a, b, i;
    printf("Digite o valor de A:\n");
    scanf("%d", &a) ;   
    printf("Digite o valor de B:\n");
    scanf("%d", &b) ;
    i = a + 1;
    printf("Serie numerada:\n");  
    while(i < b){
        printf("%d ", i);
        i++;
    }
}