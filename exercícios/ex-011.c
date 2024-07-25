//Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos. Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo cronometrado.
#include <stdio.h>

int main(){
    int tempo_inicial, segundos, minutos, horas;

    printf("Digite o tempo em segundos:\n");
    scanf("%d", &tempo_inicial);
    
    horas = tempo_inicial / 3600;
    tempo_inicial -= (3600*horas);
    minutos = tempo_inicial / 60;
    tempo_inicial -= (60*minutos);
    segundos =  tempo_inicial;

    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
}