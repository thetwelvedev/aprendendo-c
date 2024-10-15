//Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0. 
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese"); 

    for(int i = 1; i <= 5; i++){
        if(i != 5){
            printf("%d - ", i*3);
        }
        else if(i == 5){
            printf("%d\n", i*3);
        }
    }
    
    return 0;
}