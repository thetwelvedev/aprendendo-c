#include <stdio.h>
#include <locale.h>

int parimpar(int numero) {
  int resto = numero % 2;
  if (resto == 0) return 1;
  return 0;
}

int main() {
  setlocale(LC_ALL, "portuguese");
  int num;
  printf("Digite um n�mero: ");
  scanf("%d", &num);

  if (parimpar(num)) {
    printf("O n�mero %d � par.\n", num);
  } else {
    printf("O n�mero %d � �mpar.\n", num);
  }

  return 0;
}
