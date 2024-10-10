//Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Ao final, o algoritmo deve mostrar o somatório de todos os elementos do vetor, bem como a média aritmética entre todos os termos.
#include <stdio.h>
#include <locale.h>

int main(){
    int vetor[10];
    int i, soma;
    float media;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 10; i++){
        printf("Insira o dado da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);

        soma += vetor[i];
    }
    media = soma/i;
    printf("Somatório: %d\n", soma);
    printf("Média: %.1f\n", media);
}