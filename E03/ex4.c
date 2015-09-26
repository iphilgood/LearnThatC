#include <stdio.h>

// Exercise 3.4 a)
// Die Funktion increment funktioniert nur, wenn
// eine Referenz (Zeiger) der zu erhöhenden Variable übergeben wird.
//
// Wenn die Variable selbst übergeben wird, wird der Wert nur innerhalb
// des Funktionsblocks geändert (die Funktion erhält eine Kopie der
// Parameter). Bei der Speicherklasse auto wird die Variable nach
// Verlassen der Funktion verworfen.

// void increment(int * x) { *x = *x + 1; }
//
// int main() {
//   int a = 23;
//   increment(&a);
//   printf("Die Zahl lautet: %d\n", a);
// }

// Exercise 3.4 a)
// Einsatz einer statischen Variablen.
// Obwohl die Variable innerhalb des Funktionsblocks steht
// wird die Initialisierung nur ein einziges Mal aufgerufen.
// Der Gültigkeitsbereich der Variablen ist auf den Funktionsblock
// begrenzt, sie "überlebt" aber das Ende der Funktion.

void iCanCountMyself() {
    static int counter = 1;
    printf("Ich wurde %d mal aufgerufen\n", counter);
    counter++;
}

int main() {
  for (int i = 0; i < 5; i++) {
    iCanCountMyself();
  }

  return 0;
}
