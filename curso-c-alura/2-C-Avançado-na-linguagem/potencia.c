#include <stdio.h>
#include <locale.h>

int potencia(int a, int b) {
  int resultado = 1;
  for (int i = 0; i < b; i++) {
    resultado = resultado * a;
  }

  return resultado;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int base, expoente;
  
  printf("Digite a base: ");
  scanf("%d", &base);
  
  printf("Digite o expoente: ");
  scanf("%d", &expoente);

  int resultado = potencia(base, expoente);
  printf("%d elevado a %d é %d\n", base, expoente, resultado);

  return 0;
}