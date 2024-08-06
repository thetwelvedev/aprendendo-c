//Faça um programa que leia um número N e que indique quantos valores inteiros e positivos devem ser lidos a seguir. Para cada número lido, mostre o fatorial desse valor.
#include <stdio.h>

int main(){
    int n, fat = 1, number, j;

    printf("Quantos numeros serao informados:\n");
    scanf("%d", &n);
    for( int i = 1; i <= n; i++){
        printf("Digite um numero:\n");
        scanf("%d", &number); 
        j = number;  
        while(j > 1){
            fat *= j;
            j--;
        }
        printf("O fatorial de %d: %d\n", number, fat);
        fat = 1; //Para não acumular para o próximo loop
    }
}