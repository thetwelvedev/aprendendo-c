//Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga esta regra. Mostre, em seguida, os quatro números em ordem não-crescente.
#include <stdio.h>

int main(){
    int n1, n2, n3, n4;

    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite um numero:\n");
    scanf("%d", &n2);
    printf("Digite um numero:\n");
    scanf("%d", &n3);
    printf("Digite um numero:\n");
    scanf("%d", &n4);
    if (n4 <= n1){
        printf("%d - %d - %d - %d\n", n3, n2, n1, n4);
    } else if(n4 > n1 && n4 <= n2){
        printf("%d - %d - %d - %d\n", n3, n2, n4, n1);
    } else if (n4 > n2 && n4 <= n3){
        printf("%d - %d - %d - %d\n", n3, n4, n2, n1);
    } else if (n4 >= n3){
        printf("%d - %d - %d - %d\n", n4, n3, n2, n1);
    }
}