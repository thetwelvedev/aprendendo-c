/*1. Crie um programa que tenha uma função recursiva que receba um número inteiro positivo N e calcula e 
apresente o somatório dos números de 1 a N. */
#include <stdio.h>

int somatorio(int n){
    if(n <= 1){ //Caso base
        return n;
    }
    return n + somatorio(n - 1); //Vai empilhar a execução, e quando chegar no base vai voltando trazendo valores
} 
/*Com valor 5
5 -> 5 + somatorio(4) -> Primeiro a entrar e último a sair
4 -> 4 + somatorio(3) 
3 -> 3 + somatorio(2) 
2 -> 2 + somatorio(1)
1 -> 1 forma a pilha -> Último a entrar e primeiro a sair 
Como somatorio(1) = 1
Então vai executando(na ordem que foi inserido na pilha da chamada recursiva)
somatorio(1) -> 1
somatorio(2) -> 2 + 1 = 3
somatorio(3) -> 3 + 3 = 6
somatorio(4) -> 4 + 6 = 10
somatorio(5) -> 5 + 10 = 15

*/
int main(){
    int n = 5;
    printf("%d\n", somatorio(n));

    return 0;
}