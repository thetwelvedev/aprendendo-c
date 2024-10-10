#include <stdio.h>

int main(){
    char s[10];

    printf("Digite algo (scaf convencional):\n");
    gets(s);//Não limita a leitura
    fflush(stdin);

    puts("Resultado:");
    puts(s);
    puts("");

    printf("Digite algo (scaf aprimorado):\n");
    fgets(s, 10, stdin);//Limita o tamanho e já coloca o \0
    fflush(stdin);

    puts("Resultado:");
    puts(s);
}