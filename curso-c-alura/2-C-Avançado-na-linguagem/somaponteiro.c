#include <stdio.h>
#include <locale.h>

void soma(int* num, int a, int b) {
    *num = a + b; //Ele modifica o valor na memória, logo em qualquer lugar que eu acessar o valor da variável que esse ponteiro tá apontando vai ter sido modificada
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int resultado;

    soma(&resultado, 2, 3);

    printf("Resultado da soma: %d\n", resultado);

    return 0;
}