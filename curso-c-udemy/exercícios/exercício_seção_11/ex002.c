/*2. Crie um programa que tenha uma struct chamada aluno contendo nome, número de matrícula e curso.
Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na
tela.*/
#include <stdio.h>
#include <string.h>

typedef struct aluno{
    char nome[100];
    int matricula;
    char curso[100];
}Aluno;

int main(){
    Aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("\nAluno %d:\n", i + 1);
        printf("Digite o seu nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Digite o sua matricula: ");
        scanf("%d", &alunos[i].matricula);
        getchar();

        printf("Digite o seu curso: ");
        fgets(alunos[i].curso, sizeof(alunos[i].curso), stdin);
        alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0';
    }

    printf("\n--- Dados dos Alunos ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s\n", alunos[i].curso);
    }
    
   return 0;
} 