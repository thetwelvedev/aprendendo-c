//Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo. Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para aprovação, considerando que a média no exame é 6,0.
//A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir:
#include <stdio.h>

int main(){
    float nota1, nota2, nota3, media_aritmetica, nota_exame;

    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);
    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);
    printf("Digite a nota 3:\n");
    scanf("%f", &nota3);


    media_aritmetica = (nota1 + nota2 + nota3)/3;
    printf("Media: %.2f\n", media_aritmetica);

    if (media_aritmetica >= 7 && media_aritmetica <= 10){
        printf("Aprovado!\n");
    } else if (media_aritmetica >= 3 && media_aritmetica < 7){
        printf("Exame!\n");
        nota_exame = 12 - media_aritmetica;
        printf("Precisa tirar %.2f", nota_exame);
    } else if (media_aritmetica >= 0 && media_aritmetica < 3){
        printf("Reprovado!\n");
    } 
}