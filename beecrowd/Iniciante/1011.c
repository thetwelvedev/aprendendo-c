/*Faça um programa que calcule e mostre o volume de uma esfera sendo fornecido o valor de seu raio (R).
A fórmula para calcular o volume é: (4/3) * pi * R3. Considere (atribua) para pi o valor 3.14159.
Dica: Ao utilizar a fórmula, procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++), 
assumem que o resultado da divisão entre dois inteiros é outro inteiro.*/
#include <stdio.h>

#define PI 3.14159
 
int main() {

    double raio, volume;

    scanf("%lf", &raio);
    volume = (4/3.0)*PI*(raio*raio*raio);

    printf("VOLUME = %.3f\n", volume);

 
    return 0;
}