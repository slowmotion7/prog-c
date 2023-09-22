#include <stdio.h>             //padrão sempre colocar       

int main() {                       
  int posicao;

  printf("Digite a posição do competidor: ");
  scanf("%d", &posicao);

  if (posicao <= 5) {
    printf("Top 5\n");
  } else if (posicao <= 10) {
    printf("Top 10\n");
  } else if (posicao <= 20) {
    printf("Top 20\n");
  } else if (posicao <= 30) {
    printf("Top 30\n");
  } else {
    printf("Top 100\n");
  }

  return 0;   // padrão
} 

