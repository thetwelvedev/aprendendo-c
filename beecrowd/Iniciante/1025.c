/*Raju e Meena adoram jogar um jogo diferente com pequenas peças de mármores, chamados Marbles. Eles têm um monte destas peças com números escritos neles. No início, Raju colocaria estes pequenos mármores um após outro em ordem ascendente de números escritos neles. Então Meena gostaria de pedir a Raju para encontrar o primeiro mármore com um certo número. Ele deveria contar 1...2...3. Raju ganha um ponto por cada resposta correta e Meena ganha um ponto se Raju falha. Depois de um número fixo de tentativas, o jogo termina e o jogador com o máximo de pontos vence. Hoje é sua chance de jogar com Raju. Sendo um/a cara esperto/a, você tem em seu favor o computador. Mas não subestime Meena, ela escreveu um programa para monitorar quanto tempo você levará para dar todas as respostas. Portanto, agora escreva o programa, que ajudará você em seu desafio com Raju.*/

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Busca binária para encontrar a primeira ocorrência
int buscaPrimeiro(int arr[], int n, int x) {
    int inicio = 0, fim = n - 1, resultado = -1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (arr[meio] == x) {
            resultado = meio;   // achou
            fim = meio - 1;     // continua à esquerda para achar a primeira ocorrência
        }
        else if (arr[meio] > x) {
            fim = meio - 1;
        }
        else {
            inicio = meio + 1;
        }
    }
    return resultado;
}

int main() {
    int n, q, caso = 1;

    while (1) {
        scanf("%d %d", &n, &q);
        if (n == 0 && q == 0) break;

        int *marmores = (int*) malloc(n * sizeof(int));

        for (int i = 0; i < n; i++) {
            scanf("%d", &marmores[i]);
        }

        qsort(marmores, n, sizeof(int), cmp);

        printf("CASE# %d:\n", caso++);

        for (int i = 0; i < q; i++) {
            int x;
            scanf("%d", &x);

            int pos = buscaPrimeiro(marmores, n, x);
            if (pos != -1) {
                printf("%d found at %d\n", x, pos + 1); // posições começam em 1
            } else {
                printf("%d not found\n", x);
            }
        }

        free(marmores);
    }

    return 0;
}
