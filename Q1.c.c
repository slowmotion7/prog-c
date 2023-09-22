#include <stdio.h>

int main() {
  int horasTrabalhadas;
  float valorHora;
  float salario;

  printf("Digite o número de horas trabalhadas: ");
  scanf("%d", &horasTrabalhadas);

  printf("Digite o valor da hora: ");
  scanf("%f", &valorHora);

  salario = horasTrabalhadas * valorHora;

  if (horasTrabalhadas > 200) {
    salario *= 1.05; // Aumento de 5%
  }

  printf("Salário: R$%.2f\n", salario);

  return 0;
}