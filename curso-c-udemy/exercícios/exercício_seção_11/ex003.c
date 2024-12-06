/*3. Considerando a estrutura que representa um vetor R3:
Implemente um programa que receba, calcule e apresente a soma de dois vetores.*/
#include <stdio.h>
#include <string.h>

typedef struct{
    float x;
    float y;
    float z;
}Vetor;

#include <stdio.h>

int main() {
    Vetor vetores[3]; 
    
    for (int i = 0; i < 2; i++) {
        printf("Digite a coordenada do vetor %d (x, y, z): ", i + 1);
        scanf("%f %f %f", &vetores[i].x, &vetores[i].y, &vetores[i].z);
    }
    
    vetores[2].x = vetores[0].x + vetores[1].x;
    vetores[2].y = vetores[0].y + vetores[1].y;
    vetores[2].z = vetores[0].z + vetores[1].z;

    printf("Vetor resultante da soma: (%.2f, %.2f, %.2f)\n", vetores[2].x, vetores[2].y, vetores[2].z);

    return 0;
}
 