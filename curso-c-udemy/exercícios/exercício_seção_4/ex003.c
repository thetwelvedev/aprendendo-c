//Faça um programa que leia 10 números e escreva o maior e o menor valor lido.
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese"); 

    int numero, maior = 0, menor = 0;

    for(int i = 1; i <= 10; i++){
        printf("Digite um número: ");
        scanf("%d",&numero);

        if(i == 1){
            maior =  numero;
            menor =  numero;
        }
        if(menor > numero){
            menor = numero;
        }
        if(maior < numero){
            maior = numero;
        }
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    
    return 0;
}