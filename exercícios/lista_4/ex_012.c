//Desenvolva um algoritmo que receba um número N e informe se N é um número primo, ou não. A saber: um número primo é um inteiro positivo que só pode ser dividido por ele mesmo e por um, apenas.
#include <stdio.h>

int main(){
    int numero, contador = 0;

    printf("Digite um numero:\n");
    scanf("%d", &numero);
    for(int i = 1; i <= numero; i++){
        if(numero % i == 0){//Toda vez que a divisão tiver resto zero significa que o número é divivel do outro
            contador++;
        }
    }
    if(contador == 2){
        printf("Primo: %d\n", numero);
    } else {
            printf("Nao e primo: %d\n", numero);
        }
}