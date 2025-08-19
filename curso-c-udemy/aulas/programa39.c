#include <stdio.h>

#ifndef PI //Verifica se não definida em algum momento ou outro arquivo que está sendo importado
    #define PI 3.14159//constante
#endif
//ifndef - Diretiva de compilação 

int main(){
    int valor = 5; 

    valor = 467;

    printf("O valor e %d\n", valor);

    printf("PI vale %f\n", PI);

    return 0;
}