#include <stdio.h>

// Exercise 3.3 a)
// int main() {
//   int x[] = {10, 20, 30};
//   for (int i = 0; i < 3; i++) {
//     printf("Zahl %d: %d\n", i + 1, x[i]);
//   }
//
//   return 0;
// }

// Exercise 3.3 b)
// double mean(double array[], int length);
//
// int main() {
//   double x[] = {1.0, 2.0, 3.0, 4.0, 5.0};
//   double value = mean(x, 5);
//   printf("Mean value is: %.2f\n", value);
//   return 0;
// }
//
// double mean(double array[], int length) {
//   double sum;
//   for (int i = 0; i < length; i++) {
//     sum += array[i];
//   }
//
//   return sum / length;
// }

// Exercise 3.3 c)
// int main(int argc, char * argv[]) {
//   for(int i = 1; i < argc; i++) {
//     printf("Param %d is: %s\n", i, argv[i]);
//   }
//
//   return 0;
// }

// Exercise 3.3 d) and e)
typedef struct {
  int artikelNummer;
  int anzahl;
  float preis;
  char bezeichnung[50];
} t_artikel;

void printArtikel(t_artikel artikel);
float sell(int anzahl, t_artikel * partikel);

int main() {
  t_artikel artikel = {1, 10, 2.50, "Pralinato"};

  printArtikel(artikel);

  float total = sell(3, &artikel);

  printf("\nArtikel verkaufen:\n");
  printf("Die Artikel kosten zusammen: %.2f\n", total);
  printf("Jetzt sind noch %d Artikel am Lager\n\n", artikel.anzahl);

  printArtikel(artikel);

  return 0;
}

void printArtikel(t_artikel artikel) {
  printf("Artikelnummer: %d", artikel.artikelNummer);
  printf("\tAnzahl: %d", artikel.anzahl);
  printf("\tPreis: %.2f", artikel.preis);
  printf("\tBezeichnung: %s\n", artikel.bezeichnung);
}

float sell(int anzahl, t_artikel * partikel) {
  partikel -> anzahl = (partikel -> anzahl) - anzahl;

  return (partikel->preis) * anzahl;
}
