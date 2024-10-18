/* Fa�a um programa que tenha uma fun��o que dado um valor num�rico de entrada, gere e imprima como 
sa�da o n�mero de linhas com pontos de exclama��o, conforme exemplo abaixo (para n = 5): 
! 
!! 
!!! 
!!!! 
!!!!!  */
#include <stdio.h>
#include <locale.h>

void torre_exclamacao(int valor){
    for(int i = 0; i <= valor; i++){//tem que ser <= pois no 0 n�o vai ter nenhuma itera��o
        for(int j = 0; j < i; j++){//Em uma itera��o do for acima ele vai fazer a itera��o no n�mero que ela t�, exemplo quando i = 3, vai ser a terceira itera��o de i mas j vai executar 3 vezes nessa �nica itera��o de i.
            printf("!");
        }
        printf("\n");
    }
}

int main(){
setlocale(LC_ALL, "portuguese");
    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    torre_exclamacao(numero);

    return 0;
}