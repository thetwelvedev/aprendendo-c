//Leia um número e imprima o resultado do quadrado deste número.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int n1, quadrado;

    printf("Digite um número: \n");
    scanf("%d", &n1);
    quadrado = pow(n1,2);

    printf("A soma é %d\n", quadrado);

    return 0;
}