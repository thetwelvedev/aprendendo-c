//Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Após preencher todo o vetor, o usuário deve inserir uma chave de busca X. Caso exista algum número igual a X, dentro do vetor, o algoritmo deve mostrar, na tela, o índice da primeira posição na qual X foi encontrado. Caso contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não encontrada.".

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int vetor[10];
    int i, chave_de_busca, posicao;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 10; i++){
        printf("Insira o dado da posicao %d: \n", i+1);
        scanf("%d", &vetor[i]);
    }
    printf("Insira a chave de busca: \n");
    scanf("%d", &chave_de_busca);
    for(i = 0;i < 10; i++){
        if(chave_de_busca == vetor[i]){
            posicao = i + 1;
            printf("Chave encontrada na posicao: %d\n", posicao);
        }
    }
    if(chave_de_busca != vetor[i] && i == 10){
            printf("Chave nao encontrada.\n");
        }
}