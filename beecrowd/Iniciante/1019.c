/*Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.*/
#include <stdio.h>

int main() {
    int N; 
    int horas, minutos, segundos;

    scanf("%d", &N);
    
    horas = N / 3600;
    N = N % 3600;

    minutos = N / 60;
    segundos = N % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}