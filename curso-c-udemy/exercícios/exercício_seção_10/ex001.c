/*1. Faça um programa que: */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char caractere;

    // a) Criar/abrir o arquivo texto "arq.txt"
    arq = fopen("arq.txt", "w");
	if (arq == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }
	
	//b) Permita que o usuário grave diversos caracteres neste arquivo, até que o usuário entre com o caractere ‘0’;
    printf("Digite os caracteres para gravar no arquivo ('0' para encerrar):\n");
    while (1) {
        scanf(" %c", &caractere);
        if (caractere == '0') {
            break;
        }
        fputc(caractere, arq);
    }

	//c) Feche o arquivo;
	fclose(arq);

	//d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados.
	arq = fopen("arq.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo para leitura!\n");
        return 1;
    }

    printf("\nConteudo do arquivo:\n");
    while ((caractere = fgetc(arq)) != EOF) {
        putchar(caractere);
    }

	return 0;
}