#include <stdio.h>
#include <string.h>

//A  union separa e utiliza apenas o espaço da maior variável

union pessoa{
    char nome[100]; //1 char = 1 byte -> 1 * 100 = 100 bytes
    int idade; // 4 bytes
};

int main(){
    union pessoa pes;

    strcpy(pes.nome, "Neymar Jr");
    printf("Dados de %s\n", pes.nome);

    pes.idade = 39;
    printf("Ele tem %d\n", pes.idade);

    printf("Dados de %s\n", pes.nome); //Vai mostrar o dado de idade pois sobre escreve já que só aloca o espaço do tamanho da primeira variável

    printf("A variavel 'pes' esta ocupando %ld bytes em memoria.\n", sizeof(pes));

    return 0;
}