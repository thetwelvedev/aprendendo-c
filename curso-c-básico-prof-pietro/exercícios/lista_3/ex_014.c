//Faça um programa que receba a hora de início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras: hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min até as 23hr29min.
#include <stdio.h>

int main(){
    int hora_inicial, minuto_inicial, hora_final, minuto_final, resultado_hora, resultado_minuto, diferenca_minuto;
    printf("Dados do inicio\n");
    printf("Digite um numero:\n");
    scanf("%d", &hora_inicial);
    printf("Digite um numero:\n");
    scanf("%d", &minuto_inicial);
    printf("Dados do final\n");
    printf("Digite um numero:\n");
    scanf("%d", &hora_final);
    printf("Digite um numero:\n");
    scanf("%d", &minuto_final);
    if(hora_final > hora_inicial){
        resultado_hora = hora_final - hora_inicial;
        if(minuto_final > minuto_inicial){
            resultado_minuto = minuto_final - minuto_inicial;
            printf("Duracao: %dhr %dmin.\n", resultado_hora, resultado_minuto);
        } else if(minuto_inicial > minuto_final){
            diferenca_minuto = minuto_inicial - minuto_final; //Porque vai ter que descontar da hora
            resultado_hora = resultado_hora - 1;//Como a hora vai perder minuto ela vai perder uma unidade
            resultado_minuto = 60 - diferenca_minuto;
            printf("Duracao: %dhr %dmin.\n", resultado_hora, resultado_minuto);
        }
    } else if(hora_inicial > hora_final){
        resultado_hora = (24 - hora_inicial) + hora_final;
        if(minuto_final > minuto_inicial){
            resultado_minuto = minuto_final - minuto_inicial;
            printf("Duracao: %dhr %dmin.\n", resultado_hora, resultado_minuto);
        } else if(minuto_inicial > minuto_final){
            diferenca_minuto = minuto_inicial - minuto_final; //Porque vai ter que descontar da hora
            resultado_hora = resultado_hora - 1;//Como a hora vai perder minuto ela vai perder uma unidade
            resultado_minuto = 60 - diferenca_minuto;
            printf("Duracao: %dhr %dmin.\n", resultado_hora, resultado_minuto);
        }
    }

}