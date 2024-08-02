#include <stdio.h>
int main(){
    for(int i = 1;i <= 10; i++){
            if(i == 5){//Quando o continue é ativado, ele ignora tudo que vem depois e vai para a próxima iteração
                continue;
            }
            printf("%d\n", i);
    }   
}