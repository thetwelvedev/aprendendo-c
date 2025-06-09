#include <stdio.h>

int main(){
	FILE *arq;
	int num, resultado, soma = 0;

	arq = fopen("numeros.txt", "r");

	if(arq){
		while (!feof(arq)){//feof - File Enf Of File
            resultado = fscanf(arq, "%d", &num);
            if(resultado == 1){ // Toda vez que encontrar um número na linha vai receber o valor 1
                soma += num;
            }
            
		}
	} else{
		printf("Nao achei o arquivo");
	}
    printf("A soma dos numeros encontrados e %d", soma);
	fclose(arq);
	return 0;
}
