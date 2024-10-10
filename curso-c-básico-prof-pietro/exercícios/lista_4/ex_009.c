/*Desenvolva um algoritmo que peça ao usuário que insira dois números inteiros positivos A e B, no qual A deve ser menor que B (supõe-se que o usuário 
irá respeitar esse enunciado).O algoritmo deve mostrar, na tela, todos os números ímpares compreendidos entre A e B (inclusive).*/
#include <stdio.h>

int main(){
    int a,b;

    printf("Digite o valor de A:\n");
    scanf("%d", &a);
    getchar();   
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    getchar();

    for(int i = a; i <= b; i++){
        if(i % 2 != 0){
            printf("E impar: %d\n", i);
        }
    }
}