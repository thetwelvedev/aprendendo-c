#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int x;
  int y;

  printf("Primeiro valor: ");
  scanf("%d", &x);

  printf("Segundo valor: ");
  scanf("%d", &y);

  int m = x * y;
  printf("A multiplicacao de %d por %d � igual a %d\n", x, y, m);
}