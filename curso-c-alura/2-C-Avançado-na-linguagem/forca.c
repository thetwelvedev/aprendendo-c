#include <stdio.h>
#include <string.h>
#include <locale.h>
//Variávies globais
char palavrasecreta[20];
char chutes[26];
int tentativas = 0;

void cabecalho(){
    printf("*******************\n");
    printf("*  JOGO DA FORCA  *\n");
    printf("*******************\n");
}

void chuta(){ //Esse nome tentativas é só o nome do paramêtro e não a variável tentativas
    char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);
    //Vai guardar o chute no array chutes para comparar com o array palavra secreta
    chutes[tentativas] = chute; //*tentativas vai acessar o valor
    tentativas++; //Dessa forma o ++ vai ser no conteúdo e não no endereço de memória
}

int jachutou(char letra){
    int achou = 0;
    //O loop principal vai rodar esse segundo loop inteiro a cada interação com isso ele faz a comparação de todas as letras de chutes(até o momento) com cada posição em palavra secreta.
    for(int j = 0; j < tentativas; j++) { //Vai rodar a partir do momento que tentativas = 1 
        if(chutes[j] == letra) { //Aqui a letra de chute vai comparar com a letra de palavra secreta, se tiver 3 letras em chutes, então seram feita 3 comparações(se acertar para a comparação)
            achou = 1;
            break;
        }
    }
    return achou;
}

void desenhaforca(){
    //Todo novo loop o for começa do 0 por isso ele compara todas as letras
    for(int i = 0; i < strlen(palavrasecreta); i++) { // Como não tem um número de tentativas no primeiro loop ele vai imprimir logo a forca vazia, todo loop desse as letras de chutes compararam com todas as letras de palavra secreta

        //Aqui está o código
        int achou = jachutou(palavrasecreta[i]);

        if(achou) {
            printf("%c ", palavrasecreta[i]); //Quando acha coloca a letra no lugar do traço
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}
void escolhepalavra(){
    sprintf(palavrasecreta, "MELANCIA"); /*A função sprintf escreve uma saída formatada em uma string e automaticamente adiciona o caractere nulo '\0' ao final, indicando o término da string. 
    Ela permite formatar dados e armazená-los em uma variável do tipo char em vez de exibi-los na tela.*/
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

    } while (!acertou && !enforcou);//Enquanto não acertar e não for enforcado o jogador vai continuar

}