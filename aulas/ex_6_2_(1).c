#include <stdio.h>

int main(){
    char s[10];

    printf("Digite algo (scaf convencional):\n");
    scanf("%s", s);//Só vai até o espaço
    fflush(stdin);

    printf("Resultado: %s\n\n", s);

    printf("Digite algo (scaf aprimorado):\n");
    scanf("%9[^\n]s", s);//Inclui o espaço e respeita o tamanho do vetor, sendo um menos que o quantidade máxima do vetor pois tem que guardar o \0
    fflush(stdin);//O scanf coloca o \0 automaticamente

    printf("Resultado: %s\n\n", s);
}