#include <stdio.h>
#include <locale.h>

void calcula(int* c){ //Essa variável c aqui é um ponteiro
    // printf("calcula %d %d\n", c, &c); -> Aqui o conteúdo era o c e endereço de memória o &c, mas me baixo o conteúdo é o (*c) e endereço de memória o c
    printf("calcula %d %d\n", (*c), c); //Agora que essa variável C é um ponteiro, para acessar o conteúdo uso o (*c)
    (*c)++;
    printf("calcula %d %d\n", (*c), c);
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int c = 10;

    printf("main %d %d\n", c, &c);
    //calcula(c); -> assim eu passo o valor e lá na função ele usa outro endereço de memória
    calcula(&c); //Aqui eu passo o endereço de memória logo vai ser o mesmo dentro e fora da função main
    printf("main %d %d\n", c, &c);

    return 0;
}
//Uso ponteiro quando quero modificar em outra função a variável original, no caso vai tá usando o mesmo endereço de memória