/*Leia um valor de ponto flutuante com duas casas decimais. ste valor representa um valor monetário. 
A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. 
As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.
*/
#include <stdio.h>

int main() {
    double N;
    int notas, moedas, centavos;

    scanf("%lf", &N);

    int total_centavos = (int)(N * 100 + 0.5);

    printf("NOTAS:\n");

    notas = total_centavos / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    total_centavos %= 10000;

    notas = total_centavos / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    total_centavos %= 5000;

    notas = total_centavos / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    total_centavos %= 2000;

    notas = total_centavos / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    total_centavos %= 1000;

    notas = total_centavos / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    total_centavos %= 500;

    notas = total_centavos / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    total_centavos %= 200;

    printf("MOEDAS:\n");

    moedas = total_centavos / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    total_centavos %= 100;

    moedas = total_centavos / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    total_centavos %= 50;

    moedas = total_centavos / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    total_centavos %= 25;

    moedas = total_centavos / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    total_centavos %= 10;

    moedas = total_centavos / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    total_centavos %= 5;

    moedas = total_centavos / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}
