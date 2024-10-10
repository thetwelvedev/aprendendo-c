#include <stdio.h>
#include <string.h>
#include <locale.h>
//strcmp(<string1>, <string2>); - Compara igualdade entre strings e se sim retorna o valor "0"
#define N 50
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char hardText[N] = {"/exit"};
    char senha_usr[N];
    int ok;

    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText, senha_usr);

    if(ok == 0){
        printf("Textos iguais.\n");
    } else{
        printf("Textos diferentes.\n");
    }
}