/* Faça um programa que tenha uma função que dado um valor numérico de entrada, gere e imprima como 
saída o número de linhas com pontos de exclamação, conforme exemplo abaixo (para n = 5): 
! 
!! 
!!! 
!!!! 
!!!!!  */
#include <stdio.h>
#include <locale.h>

void torre_exclamacao(int valor){
    for(int i = 0; i <= valor; i++){//tem que ser <= pois no 0 não vai ter nenhuma iteração
        for(int j = 0; j < i; j++){//Em uma iteração do for acima ele vai fazer a iteração no número que ela tá, exemplo quando i = 3, vai ser a terceira iteração de i mas j vai executar 3 vezes nessa única iteração de i.
            printf("!");
        }
        printf("\n");
    }
}

int main(){
setlocale(LC_ALL, "portuguese");
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    torre_exclamacao(numero);

    return 0;
}