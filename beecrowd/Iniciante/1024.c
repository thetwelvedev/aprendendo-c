/*Solicitaram para que você construisse um programa simples de criptografia. Este programa deve possibilitar enviar mensagens codificadas sem que alguém consiga lê-las. O processo é muito simples. São feitas três passadas em todo o texto.

Na primeira passada, somente caracteres que sejam letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII: letra 'a' deve virar letra 'd', letra 'y' deve virar caractere '|' e assim sucessivamente. Na segunda passada, a linha deverá ser invertida. Na terceira e última passada, todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII. Neste caso, 'b' vira 'a' e 'a' vira '`'.

Por exemplo, se a entrada for “Texto #3”, o primeiro processamento sobre esta entrada deverá produzir “Wh{wr #3”. O resultado do segundo processamento inverte os caracteres e produz “3# rw{hW”. Por último, com o deslocamento dos caracteres da metade em diante, o resultado final deve ser “3# rvzgV”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void criptografia(char* senha){
    int contador = 0;
    //letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita
    for(int i = 0; i < 1000 && senha[i] != '\0' && senha[i] != '\n'; i++){
        if((senha[i] >= 65 && senha[i] <= 90) || (senha[i] >= 97 && senha[i] <= 122)){ //Vai movimentar só as letras
            senha[i] += 3;
        }
        contador ++; //vai pegar o tamanho da string
    }
    //inverter
    for(int i = 0; i < contador / 2; i++){
        char aux = senha[i]; //guarda o primeiro valor
        senha[i] = senha[contador - i - 1]; //coloca o valor do último caractere na primeia posição
        senha[contador - i - 1] = aux; //pega o caractere da primeira posição e coloca em último
        //tem que ter o - 1 por o indice começa do zero
    }
    //todo e qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda
    for(int i = contador / 2; i < contador; i++){
        senha[i] -= 1;
    }
}
 
int main() {
    int N;
    scanf("%d\n", &N);
    
    char senha[1000];
    
    for(int i = 0; i < N; i++){
        fgets(senha, sizeof(senha), stdin);
        criptografia(senha);
        printf("%s", senha);
    }
 
    return 0;
}