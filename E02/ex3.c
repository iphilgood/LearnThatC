#include <stdio.h>

// Exercise 2.3 a)
// int main() {
//   double input;
//   printf("Please enter one double value: ");
//   scanf("%lf", &input);
//   printf("Entered value: %f\n", input);
//   return 0;
// }

// Exercise 2.3 b)
// int main() {
//   int val1, val2, val3;
//   printf("Please enter three int values: ");
//   scanf("%d %d %d", &val1, &val2, &val3);
//   printf("Entered int values: %d %d %d\n", val1, val2, val3);
//   return 0;
// }

// Exercise 2.3 c)
int main() {
  int val4, val5, val6;
  printf("Please enter three int values: ");
  int n = scanf("%d %d %d", &val4, &val5, &val6);
  printf("Entered values: %d %d %d\n", val4, val5, val6);
  printf("Count of correct values: %d\n", n);
  return 0;
}
