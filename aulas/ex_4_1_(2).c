#include <stdio.h>

int main(){
    float m;

    printf("Digite a nota:\n");
    scanf("%f", &m);

    if(m >= 4.0 && m < 7.0){
        printf("Tem direito a exame!\n");
    }
}
/*Conjunção(e): &&
Disjunção(ou): ||
Inversão(negação):! */