/*(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o 
segundo representando sua altura em centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do aluno mais alto e o número do mais 
baixo, junto com suas alturas.
*/
#include <stdio.h>

int main(){
    float altura, altura_maior = 0, altura_menor = 0;
    int numero_aluno, numero_menor, numero_maior;
    for(int i = 1; i <= 10; i++){
        printf("Digite o numero do aluno:\n");
        scanf("%d", &numero_aluno);
        getchar();
        printf("Digite a altura do aluno:\n");
        scanf("%f", &altura);
        getchar();
        if(altura_maior == 0 && altura_menor == 0){
            numero_maior = numero_aluno;
            numero_menor = numero_aluno;
            altura_maior = altura;
            altura_menor = altura;
        } else if(altura_maior < altura) {
            numero_maior = numero_aluno;
            altura_maior = altura;
        } else if(altura_menor > altura){
            numero_menor = numero_aluno;
            altura_menor = altura;
        }

    }
    printf("Numero do maior aluno: %d\n", numero_maior);
    printf("Altura do maior aluno: %.2f\n", altura_maior);
    printf("Numero do menor aluno: %d\n", numero_menor);
    printf("Altura do menor aluno: %.2f\n", altura_menor);
}