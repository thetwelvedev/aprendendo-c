//Desenvolva um algoritmo que peça ao usuário que preencha os dados de um vetor de 5 posições com valores reais quaisquer, desde que estejam compreendidos entre 1 e 100 (suponha que o usuário irá respeitar o enunciado). Ao final, o algoritmo deve mostrar, na tela, o conteúdo de cada posição do vetor, dividido por 100.
#include <stdio.h>
#include <locale.h>

int main(){
    int vetor[5];
    int i;
    float div100;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 5; i++){
        printf("Insira o dado da posicao %d: ", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Conteúdo dividido por 100: \n");
    for(i = 0;i < 5; i++){
        div100 = vetor[i]/100.0;
        printf("%.1f\n",div100);
    }
}