#include <stdio.h>
 
int main() {
    
    double salario_fixo, total_de_vendas, salario_final;
    char nome[10];
    scanf("%s", nome);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_de_vendas);
    salario_final = salario_fixo + (0.15*total_de_vendas);
    printf("TOTAL = R$ %.2lf\n", salario_final);
 
    return 0;
}