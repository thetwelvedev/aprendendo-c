/*Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, o código de uma peça 2, o número de peças 2 e o 
valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.*/
#include <stdio.h>
 
int main() {
    int codigo_peca1, numero_de_pecas1, codigo_peca2, numero_de_pecas2;
    double valor_unitario1, valor_unitario2, valor_total;
    
    scanf("%d %d %lf",&codigo_peca1, &numero_de_pecas1, &valor_unitario1);
    scanf("%d %d %lf",&codigo_peca2, &numero_de_pecas2, &valor_unitario2);
    valor_total = (numero_de_pecas1 * valor_unitario1) + (numero_de_pecas2 *valor_unitario2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);
 
    return 0;
}