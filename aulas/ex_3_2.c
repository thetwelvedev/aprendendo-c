#include <stdio.h>

int main(){
    int A, B, soma, sub, mult, div;

    printf("Digite um numero valor:\n");
    scanf("%d", &A);
    printf("Digite um numero valor:\n");
    scanf("%d", &B);

    soma = A + B;
    sub = A - B;
    mult = A * B;
    div =  A / B;

    printf("Resultados:\n");
    printf("Soma: %d.\n", soma);
    printf("Sub.: %d.\n", sub);
    printf("Mult.: %d.\n", mult);
    printf("Div.: %d.\n", div);
}