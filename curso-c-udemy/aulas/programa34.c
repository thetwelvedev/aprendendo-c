#include <stdio.h>

//typedef -- redefinir tipos de dados, podendo dar um novo nome ao tipo como no exemplo a baixo
int main(){
    typedef float nota;

    //Declarando variáveis
    nota prova1  = 7.5;
    nota prova2  = 6.25;

    nota soma = prova1 + prova2;

    printf("Media de %.2f e %.2f: %.2f", prova1, prova2, soma/2);
    
   return 0;
} 