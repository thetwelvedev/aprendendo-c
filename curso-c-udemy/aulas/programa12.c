//
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
	//Vetores e strings
	char nome[50];
	printf("Qual o seu nome? ");
	gets(nome);
	printf("Olá %s\n", nome);

	//Vetores e caracteres
	char letras[26];
	int contador = 0;
	for(int i = 97; i <= 122; i++){
		letras[contador] = i;
		contador += 1;
	}
	//Imprimindo as letras e seus valores em decimal
	for(int i = 0; i <= 25; i++){
		printf("%d == %c\n", letras[i], letras[i]);
	}
	// //Vetores de inteiros
	// int numeros[10];

	// //Vetores e reais
	// float valores[5];

	return 0;
}