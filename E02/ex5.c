#include <stdio.h>
#include <math.h>

#define BUFF_SIZE 5

int main() {
  double angle[BUFF_SIZE];      // Buffer für Winkel
  double value[BUFF_SIZE];      // Buffer für Sinuswerte
  int i;

  // Werte berechen
  for (i = 0; i < BUFF_SIZE; i++) {
    angle[i] = i * (M_PI / (BUFF_SIZE - 1));
    value[i] = sin(angle[i]);
  }

  // Ausgabe
  for (i = 0; i < BUFF_SIZE; i++) {
    printf("Der Sinus von %.3f ist: %.3f\n", angle[i], value[i]);
  }

  return 0;
}
