#include <stdio.h>
#include <math.h>

// Exercise 2.1 a)
// int main() {
//   unsigned int i = 1000;
//   printf("Dez: %d\t Oktal: %o\t Hex: %x\n", i, i, i);
//   return 0;
// }


// Exercise 2.1 b)
// double pi = M_PI;
// double radius = 4;
//
// int main() {
//   double circumference = 2.0 * radius * pi;
//   printf("Kreisberechnung\n");
//   printf("Radius: %.2f\tUmfang: %.2f\n", radius, circumference);
//   return 0;
// }

// Exercise 2.1 c)
int main() {
  int hex_val = 0xff;
  int oct_val = 023;

  printf("Hex now dec: %d\tOct now dec: %d\n", hex_val, oct_val);
  return 0;
}
