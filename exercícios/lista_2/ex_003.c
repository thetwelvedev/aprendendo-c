/*Pedro comprou um saco de ração para seus gatos, com o peso em quilos. Faça uma função que receba o peso do saco de ração, em quilos, o 
número de gatos e a quantidade de ração fornecida para cada gato por dia, em gramas. A função deve retornar o total de quilos de ração 
restante no saco, após um dia de consumo. Assim sendo, considerando que Pedro possui dois gatos, crie um algoritmo que invoque a função 
recém criada para calcular e mostrar quanto restará de ração no saco após cinco dias.*/
#include <stdio.h>
float racao_restante(float peso, float n_gatos, float porcao);
int main(){
    float peso, n_gato, porcao_diario, sobra;
    printf("Qual o peso do saco (quilos)?");
    scanf("%f", &peso);
    printf("Qual o numero de gatos?");
    scanf("%f", &n_gato);
    printf("Qual o peso da porcao diaria (gramas)?");
    scanf("%f", &porcao_diario);

    sobra = racao_restante(peso, n_gato, porcao_diario);
    for(int i = 1; i <= 4;i++){
        sobra = racao_restante(sobra, n_gato, porcao_diario);
    }
    printf("Apos 5 dias, sobrarao: %.2f Kg de racao.\n", sobra);
}

float racao_restante(float peso, float n_gatos, float porcao){
    float restante = peso - ((n_gatos * porcao)/1000.0);
    return restante;
}