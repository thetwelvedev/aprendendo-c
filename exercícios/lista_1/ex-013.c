//Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
/*a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.*/
#include <stdio.h>
#include <math.h>

int main(){
    float valor, quadrado, cubo, raiz_quadrada, raiz_cubica;

    printf("Digite um numero inteiro e positivo: \n");
    scanf("%f", &valor);

    quadrado = pow(valor,2);
    cubo = pow(valor,3);
    raiz_quadrada = sqrt(valor);
    raiz_cubica = pow(valor, 1.0/3.0);

    printf("Quadrado: %.0f.\n", quadrado);
    printf("Cubo: %.0f.\n", cubo);
    printf("Raiz quadrada: %.10f.\n", raiz_quadrada);
    printf("Raiz cubica: %.10f.\n", raiz_cubica);
}