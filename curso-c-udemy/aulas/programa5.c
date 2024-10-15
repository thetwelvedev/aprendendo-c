#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese"); 
    int num, soma = 0; // Valores que n�o s�o inicializados v�o conter lixo de mem�ria

    // Loop do-while garante que o c�digo roda pelo menos uma vez
    do {
        // Entrada
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);

        // Processamento
        if (num != 0) {  // Somente soma se o n�mero for diferente de 0
            soma += num;  // Soma o n�mero inserido � vari�vel soma
        }

    } while (num != 0);  // Condi��o de parada � quando o n�mero for igual a 0

    // Sa�da
    printf("A soma dos n�meros �: %d\n", soma);

    return 0;
}
