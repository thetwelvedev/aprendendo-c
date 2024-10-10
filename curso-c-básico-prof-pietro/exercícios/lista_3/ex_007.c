//A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir:
#include <stdio.h>

int main(){
    float trabalho_de_laboratorio, avaliacao_semestral, exame_final, media_ponderada;

    printf("Digite a nota do trabalho:\n");
    scanf("%f", &trabalho_de_laboratorio);
    printf("Digite a nota da avaliacao:\n");
    scanf("%f", &avaliacao_semestral);
    printf("Digite a nota do exame:\n");
    scanf("%f", &exame_final);


    media_ponderada = (trabalho_de_laboratorio*2 + avaliacao_semestral*3 + exame_final*4)/9;
    printf("Media ponderada: %.2f\n", media_ponderada);

    if (media_ponderada >= 8 && media_ponderada <= 10){
        printf("Conceito A\n");
    } else if (media_ponderada >= 7 && media_ponderada < 8){
        printf("Conceito B\n");
    } else if (media_ponderada >= 6 && media_ponderada < 7){
        printf("Conceito C\n");
    } else if (media_ponderada >= 5 && media_ponderada < 6){
        printf("Conceito D\n");
    } else if (media_ponderada >= 0 && media_ponderada < 5){
        printf("Conceito E\n");
    }
}