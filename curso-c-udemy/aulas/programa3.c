//Estruturas de repeti��o for/while/do...while 
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese"); 
	int num, soma = 0;

    // Loop para receber 5 n�meros inteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);
        soma += num;  // Soma o n�mero inserido � vari�vel soma
    }

    // Exibe a soma dos n�meros
    printf("A soma dos 5 n�meros �: %d\n", soma);
	
	return 0;
}
