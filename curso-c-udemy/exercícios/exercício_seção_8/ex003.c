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
    char linha[10];//Vetor para armazenar os caracteres

    for(int i = 0; i < valor; i++){
        linha[i] = '!'; //Cada itera��o recebe um caractere a mais no pr�ximo �ndice, sendo assim cada itera��o o novo caractere vai t� do lado.
        linha[i + 1] = '\0'; // Adiciona o caractere nulo ap�s o �ltimo ponto de exclama��o para o vetor saiba onde � �ltimo ponto
        printf("%s\n", linha);
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