#include <stdio.h>
#include <stdlib.h>

int main() {
    char mapa[5][10 + 1]; // 5 linhas de 10 colunas +1 para o caractere de terminação '\0'

    mapa[0][0] = '|'; // Define o primeiro caractere da matriz
    mapa[4][9] = '@'; // Define o último caractere da matriz

    FILE *f;
    f = fopen("mapa.txt", "r"); // Abre o arquivo "mapa.txt" para leitura
    if (f == 0) {
        printf("Erro na leitura do mapa");
        exit(1); // Sai do programa em caso de erro ao abrir o arquivo
    }
    for (int i = 0; i < 5; i++) {
        fscanf(f, "%s", mapa[i]); // Lê cada linha do arquivo e armazena na matriz
    }
    for (int i = 0; i < 5; i++) {
        printf("%s\n", mapa[i]); // Imprime cada linha da matriz
    }
    
    fclose(f); // Fecha o arquivo

    return 0;
}
