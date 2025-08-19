#include <stdio.h>
/* Compilação via terminal
gcc programa41.c -o qualquer-nome.qualquer-coisa
*/

int main(){
    int qtd, soma = 0;

    printf("Quantos numeros voce quer somar? ");
    scanf("%d", &qtd);

    for(int i = 0; i < qtd; i++){
        soma += i * 2 + 3;
    }

    printf("A soma e %d\n", soma);

    return 0;
}