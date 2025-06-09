/*1. Faça um programa que: 
a) Crie/abra um arquivo texto de nome “arq.txt”; 
b) Permita que o usuário grave diversos caracteres neste arquivo, até que o usuário entre com o caractere 
‘0’; 
c) Feche o arquivo; 
d) Abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados. */
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char nome[10];

    arq = fopen("arq.txt", "w");
    if (arq) {
        printf("Escreva nomes de pessoas e, quando quiser parar, digite 0:\n");
        fgets(nome, 10, stdin);

        while (nome[0] != '0') {
            fputs(nome, arq);
            printf("Escreva nomes de pessoas e, quando quiser parar, digite 0:\n");
            fgets(nome, 10, stdin);
        }
		fclose(arq);

    } else {
        printf("Não foi possível abrir o arquivo para escrita.\n");
    
    }

    arq = fopen("arq.txt", "r");
    if (arq) {
        char ch;
        printf("\nConteudo do arquivo:\n");
        while ((ch = fgetc(arq)) != EOF) {
            printf("%c", ch);
        }
        fclose(arq);
    } else {
        printf("Não foi possível abrir o arquivo para leitura.\n");
    }

    return 0;
}
