#include <stdio.h>

// Exercise 3.7 a)
// void printBin(int value);
//
// int main() {
//   printBin(4711);
//   printBin(-1);
//
//   return 0;
// }
//
// void printBin(int value) {
//   int result = 0;
//
//   int anzBits = sizeof(value) * 8;
//
//   unsigned int mask = 1 << (anzBits - 1);
//
//   for (int i = 0; i < anzBits; i++) {
//     result = value & mask;
//
//     if (result == 0) {
//       printf("%c", '0');
//     } else {
//       printf("%c", '1');
//     }
//
//     mask = mask >> 1;
//   }
//
//   printf("\n");
// }


// Exercise 3.7 b)
//void printBin(int value);
//
//int main() {
//
//  int x = 5000;
//  printf("Zahl dezimal: %d\n", x);
//  printBin(x);
//
//  x = ~x;
//  printf("\nInvertierte Zahl dezimal: %d\n", x);
//  printBin(x);
//
//  x = ~x;
//  printf("\nNochmals invertierte Zahl dezimal: %d\n", x);
//  printBin(x);
//
//  return 0;
//}
//
//// zur besseren Visualisierung, gibt Zahl in Binärform aus
//void printBin(int value) {
//  int result = 0;
//
//  // Anzahl Bit bestimmen
//  int anzBits = sizeof(value) * 8;
//
//  // Maske initialisieren (vorderstes Bit gesetzt)
//  unsigned int mask = 1 << (anzBits - 1);
//
//  for (int i = 0; i < anzBits; i++) {
//
//    // Verknüpfung
//    result = value & mask;
//
//    // Ausgabe
//    if (result == 0) {
//      printf("%c", '0');
//    } else {
//      printf("%c", '1');
//    }
//
//    // Maske shiften, fügt 0 links ein
//    mask = mask >> 1;
//  }
//
//  // Ausgabe Zeilenumbruch:
//  printf("\n");
//}

// Exercise 3.7 c)
int main() {
    int x = 23 ^ 4;
    printf("Wert: %d\n", x);
    return 0;
}
