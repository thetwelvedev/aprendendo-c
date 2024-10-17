#include <stdio.h>
#include <locale.h>
//matrizes - parte 2

/*
array uni-dimensional (vetores) int numeros[5];
[0][1][2][3][4]

array multi-dimensional (matrizes) int numeros[5][5]; [linhas][colunas]

[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]

*/

// array multi-dimensionais
// char nome[3][50];
int main(){
    setlocale(LC_ALL, "portuguese");
	//matrizes e inteiros
	/*
	[00][01]
	[10][11]
	*/
	int numeros[2][2];
	numeros[0][0] = 1;
	numeros[0][1] = 2;
	numeros[1][0] = 3;
	numeros[1][1] = 4;

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("numeros[%d][%d] vale %d\n", i, j, numeros[i][j]);
		}
	}

	//matrizes e reais
	float valores[5][5];
    int length = sizeof(valores[0]) / sizeof(valores[0][0]); //Dividi uma linha por um elemento dela
    for(int l = 0; l < 5; l++){
		for(int c = 0; c < 5; c++){
			valores[l][c] = l;
		}
	}
    for(int l = 0; l < 5; l++){
		for(int c = 0; c < 5; c++){
            if(c == 0){//Só os valores da primeira coluna
                printf("| %.1f ", valores[l][c]);
            }
            else if(c == (length - 1)){//Só os valores da última coluna
                printf(" %.1f |\n", valores[l][c]);//Pula linha para ficar certinho a matriz
            }
            else{ //Valores do meio
                printf(" %.1f ", valores[l][c]);
            }
		}
	}



	return 0;
}

/*
//Uso do sizeof
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    // Tamanho total do array em bytes
    printf("Tamanho total do array: %zu bytes\n", sizeof(arr));
    
    // Tamanho de um único elemento do array
    printf("Tamanho de um elemento: %zu bytes\n", sizeof(arr[0]));
    
    // Quantidade de elementos no array
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Número de elementos no array: %d\n", length);

    return 0;
}
*/