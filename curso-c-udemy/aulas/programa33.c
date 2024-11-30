#include <stdio.h>
#include <string.h>

//Struct -> estrutura 
struct st_contato{
    char nome[100];
    int ano_nascimento;
    char telefone[20];
    char email[100];
};

struct st_agenda{
    struct st_contato contatos[100]; //Puxando uma struct de outra  
}agenda;

int main(){

    for(int i = 0; i < 3; i++){
        printf("Informe nome: ");
        fgets(agenda.contatos[i].nome, 100, stdin);

        printf("Informe o ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar(); //Se depois vim um fgets recomendado colocar pra não dar problema

        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone, 20, stdin);

        printf("Informe o email: ");
        fgets(agenda.contatos[i].email, 100, stdin);
    }
    for(int i = 0; i < 3; i++){
        printf("------------- Agenda de Contato -------------\n");
        printf("---------------- Contato %d ------------------\n", (i + 1));
        printf("Nome: %s\n", strtok(agenda.contatos[i].nome, "\n")); //Dentro da string o strtok remove a string passada no argumento
        printf("Telefone: %s\n", strtok(agenda.contatos[i].telefone, "\n"));
        printf("Email: %s\n", strtok(agenda.contatos[i].email, "\n"));
        printf("Ano de nascimento: %d\n", agenda.contatos[i].ano_nascimento);
    }
    return 0;
}