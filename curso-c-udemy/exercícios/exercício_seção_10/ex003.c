/*3. Faça um programa que receba do usuário o nome de um arquivo texto e um caractere. Mostre na tela 
quantas vezes aquele caractere aparece dentro do arquivo.*/
#include <stdio.h>

int main() {
    FILE *arq;
    char arquivo[100], c, caractere;
    int contador = 0;

    printf("Digite o nome do arquivo: \n");
    scanf("%s", arquivo);

    printf("Digite o caractere a ser contado: \n");
    scanf(" %c", &caractere); // espaço antes de %c para ignorar '\n' pendente

    arq = fopen(arquivo, "r");
    if (arq) {
        while ((c = fgetc(arq)) != EOF) {
            if (c == caractere) {
                contador++;
            }
        }
        fclose(arq);

        printf("O caractere '%c' aparece %d vez(es) no arquivo.\n", caractere, contador);
    } else {
        printf("Nao foi possivel abrir o arquivo para leitura.\n");
    }

    return 0;
}
