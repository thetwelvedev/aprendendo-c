/*Sabe-se que:
1 pé = 12 polegadas; 1 jarda = 3 pés; 1 milha = 1760 jardas;
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre os resultados.
a) polegadas; b) jardas; c) milhas. */
#include <stdio.h>

int main(){
    int  pe, polegada, jardas, milhas;

    printf("Digite um numero: \n");
    scanf("%d", &pe);
    polegada = 12*pe;
    jardas = pe/3;
    milhas = pe/5280;

    printf("Polegadas: %d\n", polegada);
    printf("Jardas: %d\n", jardas);
    printf("Milhas: %d\n", milhas);
}