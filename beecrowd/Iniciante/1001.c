/*Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado 
abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você 
receberá "Presentation Error".*/
#include <stdio.h>
 
int main() {
 
    int a, b, soma;
    scanf("%d", &a);
    scanf("%d", &b);
    soma = a + b;
    printf("X = %d\n", soma);
 
    return 0;
}