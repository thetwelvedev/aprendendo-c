//Leia um n�mero e imprima o resultado do quadrado deste n�mero.
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int n1, quadrado;

    printf("Digite um n�mero: \n");
    scanf("%d", &n1);
    quadrado = pow(n1,2);

    printf("A soma � %d\n", quadrado);

    return 0;
}