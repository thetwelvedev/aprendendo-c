#include <stdio.h>
int main(){
    for(int i = 1;i <= 10; i++){
        printf("%d\n", i);
            if(i == 5){//Vai parar o loop na hora que a condição for satisfeita, no caso tudo que vem depois
                break;
            }
    }
     
}