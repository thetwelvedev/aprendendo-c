//Estruturas de decis�o if, else, else if
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	//Declara��o de vari�veis
	int idade;

	//Entrada
	printf("Qual � a idade? ");
	scanf("%d", &idade);

	//Processamento
	if(idade < 18){
		printf("Voc� � menor de idade.\n");
	}else if(idade >= 18 && idade < 60){
		printf("Voc� � adulto.\n");
	}else{
		printf("Voc� � idoso.\n");
	}

	//Sa�da
	printf("Sua idade � %d", idade);
	
	return 0;
}