//Faça um programa que mostre os oito primeiros termos da sequência de Fibonacci.
#include <stdio.h>

int main(){
    int fn, fn_antecessor1, fn_antecessor2;
    //Fn = Fn-1 + Fn-2, n >= 3; F1 = F2 = 1;
    for(int n = 1; n <= 8; n++){
        if(n <= 2){
            fn = 1;
            printf("%d ", fn);
            fn_antecessor1 = fn_antecessor2 = 1;
        } else if(n >= 3){
            fn_antecessor2 = fn_antecessor1;//O Fn-2 vai pegar o valor do Fn-1
            fn_antecessor1 = fn;//O Fn-1 vai pegar o valor do FN
            fn = fn_antecessor1 + fn_antecessor2;
            printf("%d ", fn);
        }
    }
}