#include <stdio.h>
#include <locale.h>
/*
Tipos de Dados

Tipos Num�ricos:
	- Inteiros;
	- Reais;
*/
int main(){
	setlocale(LC_ALL, "portuguese"); 
	//inteiro
	//int nota1, nota2; //7, 890, ...

	//reais
	float media, nota1; //22.3, 1.23, ... 99999999
	double nota2; //23.4, 1.23, ... 99999999999999999999999999

	printf("Qual a primeira nota? ");
	scanf("%f", &nota1);

	printf("Qual a segunda nota? ");
	scanf("%lf", &nota2);

	media = nota1 + nota2 / 2;

	printf("Sua m�dia � %.1f", media);

	return 0;
}