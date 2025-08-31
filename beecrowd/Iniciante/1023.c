/*Devido às constantes estiagens que aconteceram nos últimos tempos em algumas regiões do Brasil, o governo federal criou um órgão para a avaliação do consumo destas regiões com finalidade de verificar o comportamento da população na época de racionamento. Este órgão responsável irá pegar algumas cidades (por amostragem) e verificará como está sendo o consumo de cada uma das pessoas da cidade e o consumo médio de cada cidade por habitante.*/
#include <stdio.h>

int main() {
    int N, cidade = 1;
    while (scanf("%d", &N) && N != 0) {
        int consumo[201] = {0}; // agrupa direto por consumo por pessoa
        long totalPessoas = 0, totalConsumo = 0;

        for (int i = 0; i < N; i++) {
            int X, Y;
            scanf("%d %d", &X, &Y);
            int c = Y / X;
            consumo[c] += X;
            totalPessoas += X;
            totalConsumo += Y;
        }

        if (cidade > 1) printf("\n");
        printf("Cidade# %d:\n", cidade++);

        int primeiro = 1;
        for (int c = 0; c <= 200; c++) {
            if (consumo[c] > 0) {
                if (!primeiro) printf(" ");
                printf("%d-%d", consumo[c], c);
                primeiro = 0;
            }
        }
        printf("\n");

        double media = (double) totalConsumo / totalPessoas;
        int truncado = (int)(media * 100);
        printf("Consumo medio: %.2f m3.\n", truncado / 100.0);
    }
    return 0;
}
 