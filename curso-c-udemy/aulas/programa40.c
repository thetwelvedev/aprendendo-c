#include <stdio.h>

#ifndef PI
    #define PI 3.14159
#endif
//ifdef - Diretiva de compilação 

int main(){
    int valor = 5; 

    valor = 467;

    printf("O valor e %d\n", valor);

    printf("PI vale %f\n", PI);

    #ifdef PI //Só roda se tiver sido definido o PI
        printf("O valo de PI e %f\n", PI);
    #endif

    return 0;
}