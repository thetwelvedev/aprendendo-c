//Faça um programa que receba quatro valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos. Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3.
#include <stdio.h>

int main(){
    int i;
    float a, b, c;
    printf("Digite um numero A:\n");
    scanf("%f", &a);
    printf("Digite um numero b:\n");
    scanf("%f", &b);
    printf("Digite um numero C:\n");
    scanf("%f", &c);
    printf("Digite a opcao de I:\n");
    scanf("%d", &i);

    //Crescente
    if(i == 1){
        //A maior
        if(a > b && a > c){
            if(b > c){
                printf("%.2f - %.2f - %.2f", c, b, a);
            } else {
                printf("%.2f - %.2f - %.2f", b, c, a);
            }
        }
        //B maior
        if(b > a && b > c){
            if(a > c){
                printf("%.2f - %.2f - %.2f", c, a, b);
            } else {
                printf("%.2f - %.2f - %.2f", a, c, b);
            }
        }
        //C maior
        if(c > a && c > b){
            if(a > b){
                printf("%.2f - %.2f - %.2f", b, a, c);
            } else {
                printf("%.2f - %.2f - %.2f", a, b, c);
            }
        }
    } 
    //Decrescente
    else if(i == 2){
        //A maior
        if(a > b && a > c){
            if(b > c){
                printf("%.2f - %.2f - %.2f", a, b, c);
            } else {
                printf("%.2f - %.2f - %.2f", a, c, b);
            }
        }
        //B maior
        if(b > a && b > c){
            if(a > c){
                printf("%.2f - %.2f - %.2f", b, a, c);
            } else {
                printf("%.2f - %.2f - %.2f", b, c, a);
            }
        }
        //C maior
        if(c > a && c > b){
            if(a > b){
                printf("%.2f - %.2f - %.2f", c, a, b);
            } else {
                printf("%.2f - %.2f - %.2f", c, b, a);
            }
        }
    }
    //O maior fica entre os outros dois números
    else if(i == 3){
        //A maior
        if(a > b && a > c){
            printf("%.2f - %.2f - %.2f", b, a, c);
        }
        //B maior
        if(b > a && b > c){
            printf("%.2f - %.2f - %.2f", a, b, c);
        }
        //C maior
        if(c > a && c > b){
            printf("%.2f - %.2f - %.2f", a, c, b);
        }
    }
    
}