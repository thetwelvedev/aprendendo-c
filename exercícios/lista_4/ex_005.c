//Charlinho tem 11 anos, mede 1,40 metros de altura e cresce em média 2,1 centímetros ao ano. Seu irmão, Bossa, aos 14 anos, tem 1,45 metros de altura e cresce em média 1,1 centímetro por ano. Elabore um programa que conte quantos anos serão necessários para que a altura de Charlinho ultrapasse a de Bossa.
#include <stdio.h>

int main(){
    float carlinhos = 140, bossa = 145;
    int ano = 0;
    while (carlinhos <= bossa){
        carlinhos +=  2.1;
        bossa += 1.1;
        ano++;
    }
    printf("Serao necessarios: %d", ano);
}