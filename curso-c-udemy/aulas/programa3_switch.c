#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "portuguese");
    int dia;

    // Solicita ao usu�rio que insira um n�mero correspondente a um dia da semana
    printf("Digite um n�mero (1-7) para o dia da semana: ");
    scanf("%d", &dia);

    // Estrutura switch para tratar os dias da semana
    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Ter�a-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("S�bado\n");
            break;
        default:
            // Caso o n�mero n�o esteja entre 1 e 7, exibe uma mensagem de erro
            printf("Valor inv�lido. Insira um n�mero entre 1 e 7.\n");
    }

    return 0;
}