/*Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido proporcionalmente ao 
valor que cada um deu para a realiza��o da aposta. Fa�a um programa que leia quanto cada apostador 
apostou, o valor do pr�mio e imprima quanto cada um ganharia do pr�mio com base no valor investido.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese"); // Configura��o para acentua��o

    float apostador1, apostador2, apostador3, total;
    float premio, ganhou_apostador1, ganhou_apostador2, ganhou_apostador3;

    printf("Digite o valor apostado pelo primeiro amigo: ");
    scanf("%f", &apostador1);

    printf("Digite o valor apostado pelo segundo amigo: ");
    scanf("%f", &apostador2);

    printf("Digite o valor apostado pelo terceiro amigo: ");
    scanf("%f", &apostador3);

    printf("Digite o valor do pr�mio: ");
    scanf("%f", &premio);

    total = apostador1 + apostador2 + apostador3;

    ganhou_apostador1 = (apostador1 / total) * premio;
    ganhou_apostador2 = (apostador2 / total) * premio;
    ganhou_apostador3 = (apostador3 / total) * premio;

    printf("\nO primeiro amigo vai ganhar: R$ %.2f\n", ganhou_apostador1);
    printf("O segundo amigo vai ganhar: R$ %.2f\n", ganhou_apostador2);
    printf("O terceiro amigo vai ganhar: R$ %.2f\n", ganhou_apostador3);

    return 0;
}
