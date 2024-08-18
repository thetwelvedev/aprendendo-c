//Faça um programa que carregue um vetor com oito números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante deve conter os números positivos. O segundo vetor resultante deve conter os números negativos. Cada vetor resultante vai ter no máximo oito posições, sendo que nem todas devem obrigatoriamente ser utilizadas. Imprima o conteúdo dos vetores resultantes, sem que sejam impressos "lixos de memória".
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    int vetor[8];
    int i, j = 0, k = 0, contador_positivo = 0, contador_negativo = 0;

    setlocale(LC_ALL, "Portuguese");

    for(i = 0;i < 8; i++){
        printf("Insira o dado vetor[%d]: \n", i);
        scanf("%d", &vetor[i]);
    }
    for(i = 0;i < 8; i++){
        if(vetor[i] >= 0){
            contador_positivo += 1;
        } else {
            contador_negativo += 1;
        }
    }
    int vetor_positivo[contador_positivo], vetor_negativo[contador_negativo];
    for(i = 0;i < 8; i++){
        if(vetor[i] >= 0){
            vetor_positivo[j] = vetor[i];
            j++;
        } else {
            vetor_negativo[k] = vetor[i];
            k++;
        }
    }
    printf("Vetor de positivos:\n");
    for(k = 0;k < contador_positivo; k++){
        printf("%d ", vetor_positivo[k]);
    }
    printf("\nVetor de negativos:\n");
    for(k = 0;k < contador_negativo; k++){
        printf("%d ", vetor_negativo[k]);
    }

    return 0;
}