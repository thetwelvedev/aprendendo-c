/*2. Faça um programa que receba do usuário o nome de um arquivo texto e mostre na tela quantas linhas 
este arquivo possui.*/
#include <stdio.h>

int main() {
    FILE *arq;
    char arquivo[100], c;
    int linhas = 0;

    printf("Digite o nome do arquivo: \n");
    scanf("%s", arquivo);

    arq = fopen(arquivo, "r");
    if (arq) {
        while ((c = fgetc(arq)) != EOF) {
            if (c == '\n') {
                linhas++;
            }
        }
        fclose(arq);

        printf("O arquivo possui %d linha(s).\n", linhas);
    } else {
        printf("Nao foi possivel abrir o arquivo para leitura.\n");
    }

    return 0;
}
