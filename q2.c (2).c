#include <stdio.h>

int main() {
  float preco;
  int formaPagamento;
  float precoFinal;

  printf("Digite o preço do produto: ");
  scanf("%f", &preco);

  // Leitura da forma de pagamento
  printf("Digite a forma de pagamento (1 para à vista e 2 para a prazo): ");
  scanf("%d", &formaPagamento);

  if (formaPagamento == 1) {
    precoFinal = preco * 0.95;
  } else if (formaPagamento == 2) {
    precoFinal = preco * 1.1;
  } else {
    printf("Forma de pagamento inválida.");
    return 1;
  }

  printf("Preço final: %.2f\n", precoFinal);

  return 0;
}
