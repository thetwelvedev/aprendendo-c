#include <stdio.h>
#include <locale.h>
//Tipos de dados

//Booleanos (Verdadeiro/Falso) true/false

/*
Na linguagem C, n�o existe um tipo de dado boolean

Mas...

A linguagem C, reconhece o valor 0 como Falso (false)
e Qualquer valor diferente de 0 como Verdadeiro (true)
*/
int main(){
	setlocale(LC_ALL, "portuguese"); 
	int booleano = 1;

	if(0){
		printf("Verdadeiro...");
	}else{
		printf("Falso...");
	}

	return 0;
}