//Fa�a um programa que tenha uma fun��o que, dado um caractere qualquer de entrada, retorne o mesmo  caractere sempre em mai�sculo. 
#include <stdio.h>
#include <locale.h>

char maiusculo(char caractere){
    int sub;
    sub = caractere - 32;

    return sub;
}
int main(){
setlocale(LC_ALL, "portuguese");
    char letra;

    printf("Digite um caractere: ");
    scanf("%c", &letra);

    printf("A letra %c fica %c!\n", letra, maiusculo(letra));
    
    return 0;
}