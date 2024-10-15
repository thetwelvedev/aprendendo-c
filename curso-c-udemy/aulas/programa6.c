#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese"); 
    int valor = 1;

	while(valor < 10){
		printf("Valor %d\n", valor);
		printf("Geek University\n");
		printf("Programação em C: Essencial\n");
		//valor = valor + 1;

		return 0;
	}
}