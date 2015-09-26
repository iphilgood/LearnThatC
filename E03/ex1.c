#include <stdio.h>
#include <string.h>

// Exercise 3.1 a)
// int main() {
//   char * name = "0123456789"; // 10 Zeichen
//   printf("Name: %s, Anzahl Zeichen: %d\n", name, strlen(name));
//   printf("Name: %s, Anzahl Zeichen: %lu\n", name, strlen(name)); // Mac OS X only
// }

// Exercise 3.1 b)
// Als Resultat erhält man vier.
// sizeof() bestimmt die Grösse des übergebenen Datentyps.
// Dummy ist ein Zeiger auf das erste Element eines char-Arrays.
// Ein Zeiger hat bei einem 32 Bit System die Grösse 4 Byte (bei einem 64-Bit
// System wären es 8 Byte).
//
// int main() {
//   char * dummy = "Hello World!";
//   printf("%d\n", sizeof(dummy));
//   return 0;
// }


// Exercise 3.1 c)
// void convertYear(int year, char * buffer);
//
// int main() {
//   int year = 2015;
//   char buffer[5];  // 4 + 1 (fuer '\0' Zeichen)
//
//   convertYear(year, buffer);
//   printf("Die Jahreszahl als String: %s\n", buffer);
//
//   return 0;
// }
//
// void convertYear(int year, char * buffer) {
//   sprintf(buffer, "%d", year);
// }

// Exercise 3.1 d)
int main() {
  char * first_name = "Pablo";
  char * last_name = "Escobar";
  char buffer[30];

  // This is needed because strcat inserts string at the end.
  // '\0' is needed to show the string ending.
  buffer[0] = '\0';
  strcat(buffer, first_name);
  strcat(buffer, " ");
  strcat(buffer, last_name);

  printf("Concated name is: %s\n", buffer);

  return 0;
}
