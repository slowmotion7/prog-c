#include <stdio.h>

int main() {
  int n1, n2, n3, n4;
  int qtd_positivos = 0, qtd_negativos = 0;

  printf("Informe 4 números inteiros separados por um espaço:\n");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

  if (n1 >= 0) {
    qtd_positivos++;
  } else {
    qtd_negativos++;
  }

  if (n2 >= 0) {
    qtd_positivos++;
  } else {
    qtd_negativos++;
  }

  if (n3 >= 0) {
    qtd_positivos++;
  } else {
    qtd_negativos++;
  }

  if (n4 >= 0) {
    qtd_positivos++;
  } else {
    qtd_negativos++;
  }

  printf("N1: %d\n", n1);
  printf("N2: %d\n", n2);
  printf("N3: %d\n", n3);
  printf("N4: %d\n", n4);

  printf("%d (+) e %d (-)\n", qtd_positivos, qtd_negativos);

  return 0;
}