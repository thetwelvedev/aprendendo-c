//Pe�a ao usu�rio para digitar tr�s valores inteiros e imprima a soma deles.
#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "portuguese");
    int n1, n2, n3, soma;

    printf("Digite um n�mero: \n");
    scanf("%d", &n1);
    printf("Digite um n�mero: \n");
    scanf("%d", &n2);
    printf("Digite um n�mero: \n");
    scanf("%d", &n3);

    soma = n1 + n2 + n3;

    printf("A soma � %d\n", soma);

    return 0;
}