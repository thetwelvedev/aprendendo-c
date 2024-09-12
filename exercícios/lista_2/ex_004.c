/*Cada degrau de uma escada tem X cm de altura. Faça uma função que receba essa altura, em centímetros, e a altura que o usuário deseja alcançar ao subir
 a escada, em metros. A função deve retornar o número de degraus necessários para se atingir a altura desejada (desprezando a altura do próprio usuário).
 Em seguida, crie um algoritmo para que o usuário possa informar os dados de entrada da função e, ao final, calcule e mostre o número de degraus.*/
#include <stdio.h>

int degraus_necessarios(float degrau, int escada){
    int numero_degraus = escada / (degrau/100.0);
    return numero_degraus;
}
int main(){
    float escada;
    int degrau, numero_degraus; 
    printf("Insira a altura de cada degrau(cm):\n"); 
    scanf("%d", &degrau); 
    printf("Insira a altura da escada (m):\n"); 
    scanf("%f", &escada);

    numero_degraus = degraus_necessarios(degrau, escada);
    printf("Numero de degraus: %d.\n", numero_degraus);
}