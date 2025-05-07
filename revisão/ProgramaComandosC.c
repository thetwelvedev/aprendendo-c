#include <stdio.h>
#include <stdlib.h>

int main(void){
    //Declaração de variáveis
    int n = 10; //atribuindo valor para variável
    float n2 = 6.79; //float é uma variável que posssui casas decimais
    char letra = 'a'; //variável do tipo caracter
    char frase[10] = "Bom dia!"; //string
    double n3 = 1.23456; //variável real com precisão dupla

    //Usos do comando printf com diversas variáveis
    printf("Hello World!\n");
    printf("Exibindo o numero inteiro(integer) %d\n", n);
    printf("Exibindo o numero real(float) %f\n", n2);
    printf("Exibindo o caracter(char) %c\n", letra);
    printf("Exibindo uma string(char) %s\n", frase);
    printf("Exibindo o numero real de dupla precisao(double) %f\n", n3);
    printf("Valores: %d %f %c %s %f\n", n, n2, letra, frase, n3); //Exibindo várias variáveis num mesmo print

    system("Pause"); //somente para windows
    return 0;
}