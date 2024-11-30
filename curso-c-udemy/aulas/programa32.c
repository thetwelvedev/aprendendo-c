#include <stdio.h>
#include <string.h>

//Struct -> estrutura 
struct st_aluno{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
}aluno[5];


int main(){
    //struct st_aluno alunos[5];

    for(int i = 0; i < 5; i++){
        printf("Informe a matricula do aluno: ");
        fgets(aluno[i].matricula, 10, stdin);

        printf("Informe o nome do aluno: ");
        fgets(aluno[i].nome, 100, stdin);

        printf("Informe o curso do aluno: ");
        fgets(aluno[i].curso, 50, stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d", &aluno[i].ano_nascimento);
        getchar(); //Se depois vim um fgets recomendado colocar pra não dar problema

        printf("------------ Dados do Aluno %d------------",(i+1));
        printf("\nMatricula: %s\n", aluno[i].matricula);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Curso: %s\n", aluno[i].curso);
        printf("Ano de nascimento: %d\n", aluno[i].ano_nascimento);
    }
    return 0;
}