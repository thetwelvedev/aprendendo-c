#include <stdio.h>

int main(){
    int numero =  42; //sizeof
    float nota = 7.9;
    char letra = 'd';
    double outraNota = 19.4;

    printf("A variavel 'numero' tem valor %d e ocupa %ld bytes em memorira\n", numero, sizeof(numero));
    printf("A variavel 'nota' tem valor %.2f e ocupa %ld bytes em memorira\n", nota, sizeof(nota));
    printf("A variavel 'letra' tem valor %c e ocupa %ld bytes em memorira\n", letra, sizeof(letra));
    printf("A variavel 'outraNota' tem valor %.2f e ocupa %ld bytes em memorira\n", outraNota, sizeof(outraNota));
}