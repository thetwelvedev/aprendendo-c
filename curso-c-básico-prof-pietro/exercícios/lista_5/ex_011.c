//Desenvolva um algoritmo que preencha uma matriz numérico de dimensões 3x3. Após preencher todo a matriz, o usuário deve inserir uma chave de busca X. Caso exista algum número igual a X, dentro da matriz, o algoritmo deve mostrar, na tela, os índices da linha e da coluna da posição na qual na qual X foi encontrado pela primeira vez. Caso contrário, o algoritmo deve se encerrar com uma única mensagem, dizendo "Chave não encontrada.".
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int matriz[3][3];
    int i, j, chave_de_busca;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 3; i++){
        for(j = 0;j < 3; j++){
            printf("Insira o dado da posição %d, %d: \n", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Insira a chave de busca: \n");
    scanf("%d", &chave_de_busca);
    for(i = 0;i < 3; i++){
        for(j = 0;j < 3; j++){
            if(matriz[i][j] == chave_de_busca){
                printf("Chave encontrada na linha: %d coluna: %d\n", i+1, j+1);
            }
        }
    }
    
    return 0;
}