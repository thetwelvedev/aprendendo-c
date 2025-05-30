#include <stdio.h>
 
int main() {
 
    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);

    maior = a;
    if(maior < b && b > c){
        maior = b;
        printf("%d eh o maior\n", maior);
    } else if(maior < c && c > b){
        maior = c;
        printf("%d eh o maior\n", maior);
    } else{
        printf("%d eh o maior\n", maior);
    }

    return 0;
}