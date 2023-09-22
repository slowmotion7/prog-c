#include <stdio.h>

int main() {
  int horaInicio;
  int horaFim;
  int duracao;
  
  printf("Digite a hora de início (0 a 23): ");
  scanf("%d", &horaInicio);

  printf("Digite a hora de fim (0 a 23): ");
  scanf("%d", &horaFim);

  if (horaInicio <= horaFim) {
    duracao = horaFim - horaInicio;
  } else {
    duracao = 24 - horaInicio + horaFim;
  }

  printf("Duração do evento: %d horas\n", duracao);

  return 0;
}
