#include <stdio.h>
#include <string.h>
#include <locale.h>
//strlen(<string>); - Mostra o tamanho da string
#define N 50
int main(){
    setlocale(LC_ALL, "Portuguese");
    
    char s[N];
    int i;

    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);
    puts(s);
    /*for(i = 0; i < strlen(s); i++){
        printf("%c", s[i]);
    }*/
}