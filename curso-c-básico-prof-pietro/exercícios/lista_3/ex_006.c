//Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0, calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 para "op", mostrar a mensagem "Opção inválida.".
#include <stdio.h>

int main(){
    float base, altura, area, perimetro;
    int processamento;

    printf("Digite o valor da base:\n");
    scanf("%f", &base);
    printf("Digite o valor da altura:\n");
    scanf("%f", &altura);
    printf("Opcoes de processamento:\n[0]Perimetro\n[1]Area\n");
    scanf("%d", &processamento);

    if(processamento == 0){
        perimetro = (base*2) + (altura*2);
        printf("perimetro: %.2f\n", perimetro);
    } else if(processamento == 1){
        area = base * altura;
        printf("Area: %.2f\n", area);
    } else {
        printf("Opcao invalida");
    }
}