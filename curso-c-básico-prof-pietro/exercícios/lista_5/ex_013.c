//Faça um programa que carregue uma matriz 10x3 com as três notas de dez alunos. Mostre um relatório com o número do aluno (número da linha) e a prova em que cada aluno obteve menor nota. Ao final do relatório, mostre quantos alunos tiveram menor nota na prova 1, quantos alunos tiveram menor nota na prova 2 e quantos alunos tiveram menor nota na prova 3.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int matriz[10][3];
    int i, j, contador_1=0, contador_2=0, contador_3=0;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 10; i++){
        for(j = 0;j < 3; j++){
            printf("Insira a nota %d do aluno %d: \n", j+1, i+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0;i < 10; i++){
        if(matriz[i][0] <= matriz[i][1] && matriz[i][0] <= matriz[i][2]){
            printf("Aluno %d\n", i+1);
            printf("Prova de menor nota: 1\n");
            contador_1++; //Vai contabilizar as vezes que a primeira prova for menor  
        }
        else if(matriz[i][1] <= matriz[i][0] && matriz[i][1] <= matriz[i][2]){
            printf("Aluno %d\n", i+1); 
            printf("Prova de menor nota: 2\n");
            contador_2++; //Vai contabilizar as vezes que a segunda prova for menor  
        }
        else if(matriz[i][2] <= matriz[i][0] && matriz[i][2] <= matriz[i][1]){
            printf("Aluno %d\n", i+1); 
            printf("Prova de menor nota: 3\n");
            contador_3++; //Vai contabilizar as vezes que a yerceira prova for menor  
        }
    }
    printf("Menores notas na primeira prova: %d.\n", contador_1);
    printf("Menores notas na segunda prova: %d.\n", contador_2);
    printf("Menores notas na terceira prova: %d.\n", contador_3);
}