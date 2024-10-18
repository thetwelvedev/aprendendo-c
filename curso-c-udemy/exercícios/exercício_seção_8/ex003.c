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
    char linha[10];//Vetor para armazenar os caracteres

    for(int i = 0; i < valor; i++){
        linha[i] = '!'; //Cada iteração recebe um caractere a mais no próximo índice, sendo assim cada iteração o novo caractere vai tá do lado.
        linha[i + 1] = '\0'; // Adiciona o caractere nulo após o último ponto de exclamação para o vetor saiba onde é último ponto
        printf("%s\n", linha);
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