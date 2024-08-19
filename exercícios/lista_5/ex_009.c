//Desenvolva um algoritmo que preencha uma matriz numérica de dimensões 3x3. Ao final, o algoritmo deve mostrar o somatório de todos os elementos da matriz, bem como a média aritmética entre todos os termos.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int matriz[3][3];
    int i, j,contador = 0, soma = 0, media;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 3; i++){
        for(j = 0;j < 3; j++){
            printf("Insira o dado da posição %d, %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            contador ++;
        }
    }
    media = soma/contador;
    printf("Somatório: %d\nMédia: %d\n", soma, media);
    return 0;
}