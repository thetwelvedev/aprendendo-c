//Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só conseguirá processar dois números inteiros por vez.
#include <stdio.h>

int main(){
    int operador_matematico;
    float n1, n2, resultado;

    printf("escolha um numero:\n[1]Soma\n[2]Subtracao\n[3]Multiplicacao\n[4]Dividir\n");
    scanf("%d", &operador_matematico);
    printf("Digite um numero:\n");
    scanf("%f", &n1);
    printf("Digite um numero:\n");
    scanf("%f", &n2);

    if(operador_matematico == 1){
        resultado = n1 + n2;
        printf("Soma: %.2f\n", resultado);
    } else if(operador_matematico == 2){
        resultado = n1 - n2;
        printf("Subtracao: %.2f\n", resultado);
    } else if(operador_matematico == 3){
        resultado = n1 * n2;
        printf("Multiplacao: %.2f\n", resultado);
    } else if(operador_matematico == 4){
        if (n2 != 0){
            resultado = n1 / n2;
            printf("Divisao: %.2f\n", resultado);
        } else {
            printf("Divisao por zero\n");
        }    
    } else {
        printf("Operador invalido");
    }
}