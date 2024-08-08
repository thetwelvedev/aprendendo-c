#include <stdio.h>
#include <string.h>
#include <locale.h>
//strcpy(<destino>, <origem>); - Usado para alterar o conteúdo de uma string
#define N 20
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);
}