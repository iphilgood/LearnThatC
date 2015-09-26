#include <stdio.h>

// Exercise 3.2 a)
typedef double real;
typedef double * pReal;

int main() {
  real value = 4.8;
  pReal pValue = &value;

  value = 5.2;

  printf("The value is: %.2f\n", value);
  printf("The value is: %.2f\n", *pValue);

  *pValue = 6.0;

  printf("The value is: %.2f\n", value);
  printf("The value is: %.2f\n", *pValue);

  return 0;
}
