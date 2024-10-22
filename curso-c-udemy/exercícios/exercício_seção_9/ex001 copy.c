/* Faça um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &).
Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
    // Declaração das variáveis
    int inteiro = 10;
    float real = 5.5;
    char letra = 'A';

    // Declaração dos ponteiros
    int *p_inteiro = &inteiro; //Aqui o valor do ponteiro está recebendo o endereço de mémoria
    float *p_real = &real;
    char *p_letra = &letra;

	printf("%p e %p\n", p_inteiro, &inteiro);
	printf("%p e %p\n", p_real, &real);
	printf("%p e %p\n", p_letra, &letra);

    // Impressão dos valores antes da modificação
    printf("Antes da modificação:\n");
    printf("Inteiro: %d\n", *p_inteiro);
    printf("Real: %.2f\n", *p_real);
    printf("Char: %c\n", *p_letra);

    // Modificando os valores usando os ponteiros
    *p_inteiro = 20;         // Modifica o valor de inteiro para 20
    *p_real = 10.5;         // Modifica o valor de real para 10.5
    *p_letra = 'B';         // Modifica o valor de letra para 'B'

    // Impressão dos valores após a modificação
    printf("\nApós a modificação:\n");
    printf("Inteiro: %d\n", *p_inteiro);
    printf("Real: %.2f\n", *p_real);
    printf("Char: %c\n", *p_letra);

    return 0;
}
