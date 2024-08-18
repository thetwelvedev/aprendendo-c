//Faça um programa que carregue um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos. O segundo vetor resultante deve conter os números negativos. Cada vetor resultante vai ter no máximo oito posições, sendo que nem todas devem obrigatoriamente ser utilizadas. Imprima o conteúdo dos vetores resultantes, sem que sejam impressos "lixos de memória".
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int vetor[8], vetor_positivo[8], vetor_negativo[8];
    int i, j = 0, k = 0;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 8; i++){
        printf("Insira o dado vetor[%d]: \n", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0;i < 8; i++){
        if(vetor[i] >= 0){
            vetor_positivo[j] = vetor[i];//A posição que o vetor vai ser preenchido vair ditado pelo j
            j++;
        } else {
            vetor_negativo[k] = vetor[i];//A posição que o vetor vai ser preenchido vair ditado pelo k
            k++;
        }
    }
    printf("Vetor de positivos:\n");
    for(i = 0;i < j; i++){//Vai mostrar a posição do vetor até onde foi coloca um valor
        printf("%d ", vetor_positivo[i]);
    }
    printf("\nVetor de negativos:\n");
    for(i = 0;i < k; i++){//Vai mostrar a posição do vetor até onde foi coloca um valor
        printf("%d ", vetor_negativo[i]);
    }

    return 0;
}