//Faça um programa que seja capaz de armazenar os dados de um produto: código, nome, valor e quantidade. Seu programa deve ser capaz de armazenar 5 produtos. Ao final dos cadastros, o usuário deve inserir o código de um produto e o seu programa deve imprimir, na tela, as informações daquele produto. Caso o produto não se encontre cadastrado, deve-se informar ao usuário a seguinte mensagem: "código não encontrado".
#include <stdio.h>
#include <stdbool.h>

struct produto{
    int codigo;
    char nome_produto[100];
    float valor;
    int quantidade;
};

int main(){
    struct produto produtos[5];
    int i, chave;
    bool achou;

    for(i = 0; i < 5; i++){
        printf("Insira o código do produto %d: \n", i+1);
        scanf("%d", &produtos[i].codigo);
        fflush(stdin);
        printf("Insira o nome do produto %d: \n", i+1);
        scanf("%s", produtos[i].nome_produto);
        fflush(stdin);
        printf("Insira o valor do produto %d: \n", i+1);
        scanf("%f", &produtos[i].valor);
        fflush(stdin);
        printf("Insira a quantidade do produto %d: \n", i+1);
        scanf("%d", &produtos[i].quantidade);
        fflush(stdin);
    }
    printf("Insira a chave de busca:\n");
    scanf("%d", &chave);
    for(i = 0; i < 5; i++){
        if(produtos[i].codigo == chave){
            achou = true;
            break;
        } 
    }
    if(achou){
        printf("Nome: %s\n", produtos[i].nome_produto);
        printf("Valor: R$%.2f\n", produtos[i].valor);
        printf("Quantidade: %d\n", produtos[i].quantidade);
    } else {
        printf("Código não encontrado!\n");
    }
}