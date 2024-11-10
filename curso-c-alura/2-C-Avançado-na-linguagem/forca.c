#include <stdio.h>
#include <string.h>
#include <locale.h>
//Vari�vies globais
char palavrasecreta[20];
char chutes[26];
int tentativas = 0;

void cabecalho(){
    printf("*******************\n");
    printf("*  JOGO DA FORCA  *\n");
    printf("*******************\n");
}

void chuta(){ //Esse nome tentativas � s� o nome do param�tro e n�o a vari�vel tentativas
    char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);
    //Vai guardar o chute no array chutes para comparar com o array palavra secreta
    chutes[tentativas] = chute; //*tentativas vai acessar o valor
    tentativas++; //Dessa forma o ++ vai ser no conte�do e n�o no endere�o de mem�ria
}

int jachutou(char letra){
    int achou = 0;
    //O loop principal vai rodar esse segundo loop inteiro a cada intera��o com isso ele faz a compara��o de todas as letras de chutes(at� o momento) com cada posi��o em palavra secreta.
    for(int j = 0; j < tentativas; j++) { //Vai rodar a partir do momento que tentativas = 1 
        if(chutes[j] == letra) { //Aqui a letra de chute vai comparar com a letra de palavra secreta, se tiver 3 letras em chutes, ent�o seram feita 3 compara��es(se acertar para a compara��o)
            achou = 1;
            break;
        }
    }
    return achou;
}

void desenhaforca(){
    //Todo novo loop o for come�a do 0 por isso ele compara todas as letras
    for(int i = 0; i < strlen(palavrasecreta); i++) { // Como n�o tem um n�mero de tentativas no primeiro loop ele vai imprimir logo a forca vazia, todo loop desse as letras de chutes compararam com todas as letras de palavra secreta

        //Aqui est� o c�digo
        int achou = jachutou(palavrasecreta[i]);

        if(achou) {
            printf("%c ", palavrasecreta[i]); //Quando acha coloca a letra no lugar do tra�o
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}
void escolhepalavra(){
    sprintf(palavrasecreta, "MELANCIA"); /*A fun��o sprintf escreve uma sa�da formatada em uma string e automaticamente adiciona o caractere nulo '\0' ao final, indicando o t�rmino da string. 
    Ela permite formatar dados e armazen�-los em uma vari�vel do tipo char em vez de exibi-los na tela.*/
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int acertou = 0;
    int enforcou = 0;

    escolhepalavra();
    cabecalho();

    do {
        desenhaforca();
        //Captura um novo chute
        chuta();

    } while (!acertou && !enforcou);//Enquanto n�o acertar e n�o for enforcado o jogador vai continuar

}