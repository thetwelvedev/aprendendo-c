#include <stdio.h>
#include <locale.h>

int soma(int numeros[10]) {
  int total = 0;
  for (int i = 0; i < 10; i++) {
    total += numeros[i];
  }
  return total;
}

int main() {
  setlocale(LC_ALL, "Portuguese");
  int numeros[10];
  
  printf("Digite 10 números:\n");
  for (int i = 0; i < 10; i++) {
    printf("Número %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  int resultado = soma(numeros);
  printf("A soma dos números é: %d\n", resultado);

  return 0;
}
