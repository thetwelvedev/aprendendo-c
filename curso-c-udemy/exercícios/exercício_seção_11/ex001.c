/*1. Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma
struct.*/
#include <stdio.h>

typedef struct pessoa{
    char nome[100];
    int idade;
    char endereco[100];
}Pessoa;

int main(){
    Pessoa pessoa1;

    printf("Digite o seu nome: ");
    fgets(pessoa1.nome, sizeof(pessoa1.nome), stdin);

    printf("Digite a sua idade: ");
    scanf("%d", &pessoa1.idade);
    getchar();

    printf("Digite o seu endereco: ");
    fgets(pessoa1.endereco, sizeof(pessoa1.endereco), stdin);

    printf("\n--- InformacoLes ---\n");
    printf("Nome: %s", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endereco: %s", pessoa1.endereco);

    
   return 0;
} 