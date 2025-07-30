/* Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. 
A seguir mostre o valor lido e a relação de notas necessárias. */
#include <stdio.h>

int main() {
    int N;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};
    int quantidade[7];

    scanf("%d", &N);

    printf("%d\n", N);

    for (int i = 0; i < 7; i++) {
        quantidade[i] = N / notas[i];
        N = N % notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade[i], notas[i]);
    }

    return 0;
}
