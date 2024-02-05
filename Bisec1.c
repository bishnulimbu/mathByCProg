#include "stdio.h"
#include <math.h>

float f(float x) { return pow(x, 3) + 2 * x - 1; };

int main() {
  printf("hello world1");
  float x1, x2, x0, x, err = 0.001;
  printf("enter the first case.");
  scanf("%f", &x1);
  printf("enter the second case.");
  scanf("%f", &x2);
  if (f(x1) * f(x2) >= 0) {
    printf("\n invalid case");
  }
  do {
    x0 = (x1 + x2) / 2;
    if (f(x1) * f(x0) > 0) {
      x0 = x1;
    } else {
      x0 = x2;
    }
  } while (fabs(f(x0)) > err);
  printf("%f", x0);

  return 0;
}
