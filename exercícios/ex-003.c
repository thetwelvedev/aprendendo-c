//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.
#include <stdio.h>

int main(){ 
    float n1, n2, n3, p1, p2, p3, media;

    printf("Digite uma nota 1:\n");
    scanf("%f", &n1);
    printf("Digite o peso nota 1:\n");
    scanf("%f", &p1);
    printf("Digite uma nota 2 :\n");
    scanf("%f", &n2);
    printf("Digite o peso nota 2:\n");
    scanf("%f", &p2);
    printf("Digite uma nota 3:\n");
    scanf("%f", &n3);
    printf("Digite o peso nota 3:\n");
    scanf("%f", &p3);
    
    media = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

    printf("Resultado:\nMedia Ponderada: %.2f", media);
}