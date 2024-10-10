//Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule e mostre as raízes da respectiva equação de segundo grau.
#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, x1, x2;

    printf("Digite o coeficiente a:\n");
    scanf("%f", &a);
    printf("Digite o coeficiente b:\n");
    scanf("%f", &b);
    printf("Digite o coeficiente c:\n");
    scanf("%f", &c);

    delta = pow(b,2) - 4*a*c;

    if (delta > 0){ //duas raízes reais e distintas
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        printf("raiz x': %2.f\nraiz x'':%2.f\n", x1, x2);
    } else if(delta == 0){//uma raiz real
        x1 = -b/2*a;
        printf("raiz x :%2.f\n", x1);
    } else if (delta < 0){
        printf("Nao ha raizes reais!");
    } 
}