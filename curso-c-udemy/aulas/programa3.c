//Estruturas de repetição for/while/do...while 
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese"); 
	int num, soma = 0; //Valores que não são inicializados vão conter lixo de mémoria
	//entrada
    printf("Digite números inteiros para somar (0 para parar):\n");
	scanf("%d", &num);

    // Loop continua até que o número inserido seja 0
    while(num != 0) {
		//processamento
        soma += num;  // Soma o número inserido à variável soma

        printf("Digite um número inteiro: ");
        scanf("%d", &num);
    }

    //saída
    printf("A soma dos números é: %d\n", soma);
	
	return 0;
}
