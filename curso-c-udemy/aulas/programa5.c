#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese"); 
    int num, soma = 0; // Valores que não são inicializados vão conter lixo de memória

    // Loop do-while garante que o código roda pelo menos uma vez
    do {
        // Entrada
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        // Processamento
        if (num != 0) {  // Somente soma se o número for diferente de 0
            soma += num;  // Soma o número inserido à variável soma
        }

    } while (num != 0);  // Condição de parada é quando o número for igual a 0

    // Saída
    printf("A soma dos números é: %d\n", soma);

    return 0;
}
