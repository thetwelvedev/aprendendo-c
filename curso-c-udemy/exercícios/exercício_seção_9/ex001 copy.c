/* Fa�a um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as vari�veis aos ponteiros (use &).
Modifique os valores de cada vari�vel usando os ponteiros. Imprima os valores das vari�veis antes e ap�s a modifica��o.*/
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
    // Declara��o das vari�veis
    int inteiro = 10;
    float real = 5.5;
    char letra = 'A';

    // Declara��o dos ponteiros
    int *p_inteiro = &inteiro; //Aqui o valor do ponteiro est� recebendo o endere�o de m�moria
    float *p_real = &real;
    char *p_letra = &letra;

	printf("%p e %p\n", p_inteiro, &inteiro);
	printf("%p e %p\n", p_real, &real);
	printf("%p e %p\n", p_letra, &letra);

    // Impress�o dos valores antes da modifica��o
    printf("Antes da modifica��o:\n");
    printf("Inteiro: %d\n", *p_inteiro);
    printf("Real: %.2f\n", *p_real);
    printf("Char: %c\n", *p_letra);

    // Modificando os valores usando os ponteiros
    *p_inteiro = 20;         // Modifica o valor de inteiro para 20
    *p_real = 10.5;         // Modifica o valor de real para 10.5
    *p_letra = 'B';         // Modifica o valor de letra para 'B'

    // Impress�o dos valores ap�s a modifica��o
    printf("\nAp�s a modifica��o:\n");
    printf("Inteiro: %d\n", *p_inteiro);
    printf("Real: %.2f\n", *p_real);
    printf("Char: %c\n", *p_letra);

    return 0;
}
