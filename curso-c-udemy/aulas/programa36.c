#include <stdio.h>
#include <string.h>

union numeros{
    int num1, num2, num3, num4, num5;
}n;

int main(){
    int soma = 0;

    n.num1 = 1;
    soma = soma + n.num1;
    printf("Num1 = %d\n", n.num1);

    n.num2 = 3;
    soma = soma + n.num2;
    printf("Num2 = %d\n", n.num2);

    n.num3 = 5;
    soma = soma + n.num3;
    printf("Num3 = %d\n", n.num3);

    n.num4 = 7;
    soma = soma + n.num4;
    printf("Num4 = %d\n", n.num4);

    n.num5 = 9;
    soma = soma + n.num5;
    printf("Num5 = %d\n", n.num5);

    printf("---------------------\n");
    printf("Num1 = %d\n", n.num1);
    printf("Num2 = %d\n", n.num2);
    printf("Num3 = %d\n", n.num3);
    printf("Num4 = %d\n", n.num4);
    printf("Num5 = %d\n", n.num5);

    printf("Soma = %d", soma);

    printf("A variavel 'n' esta ocupando %ld bytes em memoria.\n", sizeof(n));
    printf("Memoria total ocupada %ld bytes.\n", (sizeof(n) + sizeof(soma))); //Economiza a utilização de espaço

    return 0;
}