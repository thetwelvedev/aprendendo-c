/*Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).1*/
#include <stdio.h>
 
int main() {
 
    int x;
    float y, kml;

    scanf("%d", &x);
    scanf("%f", &y);

    kml = x/y;

    printf("%.3f km/l\n", kml);
 
    return 0;
}