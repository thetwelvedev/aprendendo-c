//Estruturas de repeti��o for/while/do...while 
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese"); 
	int num, soma = 0; //Valores que n�o s�o inicializados v�o conter lixo de m�moria
	//entrada
    printf("Digite n�meros inteiros para somar (0 para parar):\n");
	scanf("%d", &num);

    // Loop continua at� que o n�mero inserido seja 0
    while(num != 0) {
		//processamento
        soma += num;  // Soma o n�mero inserido � vari�vel soma

        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num);
    }

    //sa�da
    printf("A soma dos n�meros �: %d\n", soma);
	
	return 0;
}
