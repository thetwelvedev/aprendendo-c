/*A tarefa aqui neste problema é ler uma expressão matemática na forma de dois números Racionais (numerador / denominador) e apresentar o resultado da operação. Cada operando ou operador é separado por um espaço em branco. A sequência de cada linha que contém a expressão a ser lida é: número, caractere, número, caractere, número, caractere, número. A resposta deverá ser apresentada e posteriormente simplificada. Deverá então ser apresentado o sinal de igualdade e em seguida a resposta simplificada. No caso de não ser possível uma simplificação, deve ser apresentada a mesma resposta após o sinal de igualdade.

Considerando N1 e D1 como numerador e denominador da primeira fração, segue a orientação de como deverá ser realizada cada uma das operações:
Soma: (N1*D2 + N2*D1) / (D1*D2)
Subtração: (N1*D2 - N2*D1) / (D1*D2)
Multiplicação: (N1*N2) / (D1*D2)
Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1)
*/
#include <stdio.h>
#include <stdlib.h>

//Função para calcular o MDC
int mdc(int a, int b) {
    if (b == 0) return a;
    return mdc(b, a % b);
}

int main() {
    int n;
    int N1, D1, N2, D2, NR, DR;
    char op, barra;

    scanf("%d", &n);

    while (n--) {
        scanf("%d %c %d %c %d %c %d", &N1, &barra, &D1, &op, &N2, &barra, &D2);

        if (op == '+') {
            NR = N1 * D2 + N2 * D1;
            DR = D1 * D2;
        } else if (op == '-') {
            NR = N1 * D2 - N2 * D1;
            DR = D1 * D2;
        } else if (op == '*') {
            NR = N1 * N2;
            DR = D1 * D2;
        } else if (op == '/') {
            NR = N1 * D2;
            DR = N2 * D1;
        }

        // Simplificação
        int div = mdc(abs(NR), abs(DR));
        int simpN = NR / div;
        int simpD = DR / div;

        printf("%d/%d = %d/%d\n", NR, DR, simpN, simpD);
    }

    return 0;
}

