#include <stdio.h>
int main(){
    int i = 1;
    //do-while o bloco de notas é executado pelo menos uma vez e a condição e avaliada apenas no final.
    do{ //Independente do valor de i, na primeira vez vai ser impresso pois a condição só é avalida no final.
        printf("%d\n", i);
        i++;
    } while (i <= 10);
     
}