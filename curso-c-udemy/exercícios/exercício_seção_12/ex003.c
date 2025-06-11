/*3. Crie um programa que tenha uma função recursiva que receba um valor inteiro e converta este número para binário. */
#include <stdio.h>

int inteiro_para_binario(int n) {
    if (n == 0) {
        return 0;  // Caso base
    } else {
        return (n % 2 + 10 * inteiro_para_binario(n / 2));
        /*n % 2 -> Calcula o bit menos significativo (0 ou 1)
        n / 2 -> Remove o bit menos significativo (prepara para a próxima chamada recursiva)
        10 * inteiro_para_binario(n / 2) -> "Desloca" os bits para a esquerda (multiplicar por 10 em decimal simula um shift left em binário) */
    }
}

/*
Chamada com n=5: 1 + 10 * (chamada n=2)
Chamada com n=2: 0 + 10 * (chamada n=1)
Chamada com n=1: 1 + 10 * (chamada n=0)
Chamada com n=0: return 0 (caso base)
*/

int main(){
    int n = 5;
    printf("%d -> %d\n", n, inteiro_para_binario(n));

    return 0;
}