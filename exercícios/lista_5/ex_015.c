//Faça um programa que seja capaz de armazenar os dados de uma pessoa: nome, idade, peso e altura. Seu programa deve ser capaz de armazenar 5 pessoas. Ao final dos cadastros, o seu programa deve imprimir, na tela, todas as informações de todas as pessoas. Seu programa deve mostrar, também, o nome da pessoa mais magra, nome da pessoa mais baixa e a média das idades de todas as pessoas.
#include <stdio.h>
#include <string.h>

struct pessoa{
    char nome[100];
    int idade;
    float peso;
    float altura;
};

int main(){
    struct pessoa pessoas[5];
    int i;
    float soma_idade = 0, media_idade, menor_peso, menor_altura;
    char nome_menor_peso[100], nome_menor_altura[100];

    for(i = 0; i < 5; i++){
        printf("Insira o nome da pessoa %d: \n", i+1);
        scanf("%s", pessoas[i].nome);
        fflush(stdin);
        printf("Insira a idade da pessoa %d: \n", i+1);
        scanf("%d", &pessoas[i].idade);
        fflush(stdin);
        printf("Insira o peso da pessoa %d: \n", i+1);
        scanf("%f", &pessoas[i].peso);
        fflush(stdin);
        printf("Insira a altura da pessoa %d: \n", i+1);
        scanf("%f", &pessoas[i].altura);
        fflush(stdin);

        if(i == 0 || pessoas[i].peso < menor_peso){
            menor_peso = pessoas[i].peso;
            strcpy(nome_menor_peso, pessoas[i].nome);
        }

        if(i == 0 || pessoas[i].altura < menor_altura){
            menor_altura = pessoas[i].altura;
            strcpy(nome_menor_altura, pessoas[i].nome);
        }

        soma_idade += pessoas[i].idade;
    }

    media_idade = soma_idade / 5;

    printf("\nPessoa mais magra: %s\n", nome_menor_peso);
    printf("Pessoa mais baixa: %s\n", nome_menor_altura);
    printf("Média das idades: %.2f\n", media_idade);

    return 0;
}