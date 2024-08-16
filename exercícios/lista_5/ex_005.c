//Faça um programa que carregue dois vetores de dez elementos numéricos cada um e mostre um vetor resultante da intercalação desses dois vetores.
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int vetor1[10], vetor2[10], vetor_resultante[20];
    int i, j, k, contador = 0;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 10; i++){
        printf("Insira o dado vetor1[%d]: \n", i);
        scanf("%d", &vetor1[i]);
    }
    for(j = 0;j < 10; j++){
        printf("Insira o dado vetor2[%d]: \n", j);
        scanf("%d", &vetor2[j]);
    }
    for(k = 0; k < 10; k++){
        vetor_resultante[contador] = vetor1[k];
        vetor_resultante[contador+1] = vetor2[k];//Sempre tem que tá um a mais para o outro vetor
        contador += 2;//Tem que ser +2 pois o +1 dentro do vetor não acrescenta ao contador
    }

    printf("Vetor resultante:\n");
    for(k = 0; k < 20; k++){
        printf("%d ", vetor_resultante[k]);
    }

    return 0;
}
