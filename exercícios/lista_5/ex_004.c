//Faça um programa que carregue um vetor e nove elementos numéricos inteiros, calcule e mostre os números primos e suas respectivas posições.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int vetor[9];
    int i, j, posicao, contador = 0;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 9; i++){
        printf("Insira o dado da posicao %d: \n", i+1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0;i < 9; i++){
        if(vetor[i] > 2){//Tem que ser maior que dois para ser primo
            for(j = 2;j <= vetor[i]; j++){//Vou percorrer a lista no intervalo de número entre 2 e o número no vetor
                if(vetor[i] % j == 0){
                    contador++; //Para o número ser primo ele só pode dividir por 1 por ele mesmo, então como não tem o 1 para dividir somente ele mesmo dividindo vai ter resto 0
                }
            }
            if(contador == 1){
                posicao = i + 1;
                printf("%d é primo, posição: %d\n",vetor[i], posicao);
            }
            contador = 0; //Tem que zerar o contador
        }
    }
}