#include <stdio.h>

int main(){
	FILE *arq;
	char nome[10], *resultados;

	arq = fopen("arquivo.txt", "r");

	if(arq){
		while (!feof(arq)){//feof - File Enf Of File
            resultados = fgets(nome, 10, arq);
            if (resultados){ //Só imprime se o resultado for diferente de 0
                printf("%s", nome);
            }
		}
	} else{
		printf("Nao achei o arquivo");
	}
	fclose(arq);
	return 0;
}
