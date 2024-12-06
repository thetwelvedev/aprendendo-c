/*3. Considerando a estrutura que representa um vetor R3:
Implemente um programa que receba, calcule e apresente a soma de dois vetores.*/
#include <stdio.h>
#include <string.h>

typedef struct vetor{
    float x;
    float y;
    float z;
}Vetor;

int main(){
    Vetor v1, v2, soma;

    printf("Digite a coordenada do vetor 1 (x,y,z): ");
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    printf("Digite a coordenada do vetor 2 (x,y,z): ");
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);
    //Soma de vetores
    soma.x = v1.x + v2.x;
    soma.y = v1.y + v2.y;
    soma.z = v1.z + v2.z;
    
    printf("Vetor resultante da soma: (%.2f, %.2f, %.2f)", soma.x, soma.y, soma.z);

    return 0;
} 