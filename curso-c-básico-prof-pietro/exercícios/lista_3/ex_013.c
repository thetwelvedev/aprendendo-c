//Faça um programa que mostre o menu de opções a seguir, receba a opção do usuário e dos dados necessários para executar cada operação. Suponha que o usuário não irá inserir valores inválidos.
/*Menu de opções:
1. Somar dois números
2. Raiz quadrada de um número
Digite a opção desejada*/
#include <stdio.h>
#include <math.h>

int main(){
    float n1, n2, soma, raiz, opcao;

    printf("escolha um numero:\n[1]Somar dois numeros\n[2]Raiz quadrada de um numero\n");
    scanf("%f", &opcao);
    if(opcao == 1){
        printf("Digite um numero:\n");
        scanf("%f", &n1);
        printf("Digite um outro numero:\n");
        scanf("%f", &n2);
        soma = n1 + n2;
        printf("Resultado da soma: %.2f", soma);
    } else if(opcao == 2){
        printf("Digite um numero:\n");
        scanf("%f", &n1);
        raiz = sqrt(n1);
        printf("Resultado da soma: %.2f", raiz);
    }
}