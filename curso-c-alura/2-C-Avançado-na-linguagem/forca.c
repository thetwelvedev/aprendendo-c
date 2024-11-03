#include <stdio.h>
#include <string.h>
#include <locale.h>

void cabecalho(){
    printf("*******************\n");
    printf("*  JOGO DA FORCA  *\n");
    printf("*******************\n");
}

void chuta(char chutes[26], int tentativas){ //Esse nome tentativas � s� o nome do param�tro e n�o a vari�vel tentativas
    char chute;
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute; //Vai guardar o chute no array chutes para comparar com o array palavra secreta
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    char palavrasecreta[20];
    sprintf(palavrasecreta, "MELANCIA"); /*A fun��o sprintf escreve uma sa�da formatada em uma string e automaticamente adiciona o caractere nulo '\0' ao final, indicando o t�rmino da string. 
    Ela permite formatar dados e armazen�-los em uma vari�vel do tipo char em vez de exibi-los na tela.*/

    int acertou = 0;
    int enforcou = 0;

    char chutes[26];
    int tentativas = 0;

    cabecalho();

    do {
        //Todo novo loop o for come�a do 0 por isso ele compara todas as letras
        for(int i = 0; i < strlen(palavrasecreta); i++) { // Como n�o tem um n�mero de tentativas no primeiro loop ele vai imprimir logo a forca vazia, todo loop desse as letras de chutes compararam com todas as letras de palavra secreta
            int achou = 0;
            //O loop principal vai rodar esse segundo loop inteiro a cada intera��o com isso ele faz a compara��o de todas as letras de chutes(at� o momento) com cada posi��o em palavra secreta.
            for(int j = 0; j < tentativas; j++) { //Vai rodar a partir do momento que tentativas = 1 
                if(chutes[j] == palavrasecreta[i]) { //Aqui a letra de chute vai comparar com a letra de palavra secreta, se tiver 3 letras em chutes, ent�o seram feita 3 compara��es(se acertar para a compara��o)
                    achou = 1;
                    break;
                }
            }

            if(achou) {
                printf("%c ", palavrasecreta[i]); //Quando acha coloca a letra no lugar do tra�o
            } else {
                printf("_ ");
            }
        }
        printf("\n");

        //Captura um novo chute
        chuta(chutes, tentativas);
        tentativas++; 

    } while (!acertou && !enforcou);//Enquanto n�o acertar e n�o for enforcado o jogador vai continuar

}