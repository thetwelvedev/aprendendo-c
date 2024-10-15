//Estruturas de repetição for/while/do...while 
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese"); 
	int num, soma = 0;

    // Loop para receber 5 números inteiros
    for (int i = 0; i < 5; i++) {
		//Entrada
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
		//Processamento
        soma += num;  // Soma o número inserido à variável soma
    }

    //Saída
    printf("A soma dos 5 números é: %d\n", soma);
	
	return 0;
}
