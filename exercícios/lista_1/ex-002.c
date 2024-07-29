//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.
#include <stdio.h>

int main(){ 
    float n1, n2, n3, media;

    printf("Digite uma nota:\n");
    scanf("%f", &n1);
    printf("Digite uma nota:\n");
    scanf("%f", &n2);
    printf("Digite uma nota:\n");
    scanf("%f", &n3);
    
    media = (n1+n2+n3)/3;

    printf("Resultado:\nMedia: %.2f", media);
}