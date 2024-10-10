//Desenvolva um algoritmo que peça ao usuário que insira cinco conjuntos de dois números inteiros positivos (A, B), no qual A deve ser menor que B (supõe-se que o usuário irá respeitar esse enunciado). Para cada dupla (A, B), informada pelo usuário, o algoritmo deve mostrar, na tela, todos os números pares compreendidos entre A e B (inclusive).
#include <stdio.h>

int main(){
    int a, b, i, j;
    for(i = 1; i <= 5; i++){//Vai fazer perguntar 5 vezes
        printf("Digite o valor de A:\n");
        scanf("%d", &a);   
        printf("Digite o valor de B:\n");
        scanf("%d", &b);
        for(j = a; j <= b; j++){ // vai pecorrer os números no invervalo de ]a,b[
            if(j % 2 == 0){//Só número par
                printf("Par: %d\n", j);
            }
        }
    }
}