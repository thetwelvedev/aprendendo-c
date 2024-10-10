//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14.
#include <stdio.h>
#include <math.h>

#define PI 3.14
int main(){
    float raio, area;

    printf("Digite o raio:\n");
    scanf("%f", &raio);
    
    area = PI * pow(raio,2);

    printf("Area do circulo: %.2f\n", area);
}