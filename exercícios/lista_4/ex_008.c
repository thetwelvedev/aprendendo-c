/*Desenvolva um algoritmo que peça para o usuário informar dois números. Após isso, o algoritmo deve mostrar cálculo o primeiro número elevado ao 
segundo. Ao final, o algoritmo deve perguntar se o usuário deseja repetir a operação. Caso o usuário insira o caractere "s", o algoritmo solicita
novamente dois números e mostra novamente a potência do primeiro pelo segundo. Caso contrário, o algoritmo é encerrado.*/
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, potencia;
    char opcao;
    do{
        printf("Digite o valor de A:\n");
        scanf("%f", &a);
        fflush(stdin);   
        printf("Digite o valor de B:\n");
        scanf("%f", &b);
        fflush(stdin);
        potencia = pow(a,b);
        printf("A elevando a B: %.2f\n", potencia);

        printf("Deseja repetir a operacao?[s/n]\n");
        scanf("%c", &opcao);
        fflush(stdin);
    } while (opcao != 'n' && opcao != 'N'); //Tem que ser o AND pois se usar o OR um lado vai ser verdadeiro ainda e vai continuar rodando
    
}