//Faça um programa que receba três números distintos e mostre-os em ordem crescente.
#include <stdio.h>

int main(){
    int n1, n2, n3;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite um numero:\n");
    scanf("%d", &n2);
    printf("Digite um numero:\n");
    scanf("%d", &n3);
    //Ordem crescente
    if(n1 > n2 && n1 > n3){
        if(n2 > n3){
            printf("%d - %d - %d\n", n3, n2, n1);
        } else {//n3 > n2
            printf("%d - %d - %d\n", n2, n3, n1);
        }
    }
    else if(n2 > n1 && n2 > n3){
        if(n1 > n3){
            printf("%d - %d - %d\n", n3, n1, n2);
        } else {//n3 > n1
            printf("%d - %d - %d\n", n1, n3, n2);
        }
    }
    else if(n3 > n1 && n3 > n2){
        if(n1 > n2){
            printf("%d - %d - %d\n", n2, n1, n3);
        } else {//n2 > n1
            printf("%d - %d - %d\n", n1, n2, n3);
        }   
    }
}