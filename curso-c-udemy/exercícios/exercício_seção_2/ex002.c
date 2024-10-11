//Peça ao usuário para digitar três valores inteiros e imprima a soma deles.
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int n1, n2, n3, soma;

    printf("Digite um número: \n");
    scanf("%d", &n1);
    printf("Digite um número: \n");
    scanf("%d", &n2);
    printf("Digite um número: \n");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;

    printf("A soma é %d\n", soma);

    return 0;
}