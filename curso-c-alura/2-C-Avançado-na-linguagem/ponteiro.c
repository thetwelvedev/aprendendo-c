#include <stdio.h>
#include <locale.h>

void calcula(int c){
    printf("calcula %d %d\n", c, &c);
    c++;
    printf("calcula %d %d\n", c, &c);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int c = 10;

    printf("calcula %d %d\n", c, &c);
    //calcula(c); -> assim eu passo o valor e lá na função ele usa outro endereço de memória
    calcula(&c); //Aqui eu passo o endereço de memória logo vai ser o mesmo dentro e fora da função main
    printf("calcula %d %d\n", c, &c);

    return 0;
}