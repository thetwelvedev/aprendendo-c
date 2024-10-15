//Escreva um programa que declare um inteiro, inicialize-o com 0, incremente-o de 100 em 100, imprimindo  seu valor na tela, até que seu valor seja 100000 (cem mil).
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int numero = 0;

    while (numero <= 100000) {
        printf("%d\n", numero);
        numero += 100;
    }

    return 0;
}
