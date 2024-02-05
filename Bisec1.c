#include "stdio.h"
#include <math.h>

float f(float x) { return pow(x, 3) + 2 * x - 1; };

int main() {
  printf("hello world1");
  float x1, x2, x0, x;
  printf("enter the first case.");
  scanf("%f", &x1);
  printf("enter the second case.");
  scanf("%f", &x2);
  if (f(x1) * f(x2) >= 0) {
    printf("\n invalid case");
  }

  return 0;
}
