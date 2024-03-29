#include "stdio.h"
#include <math.h>

float f(float x) { return pow(x, 3) - 2 * x - 5; };

int main() {
  float x1, x2, x0, x, err = 0.001;
  printf("enter the first case.");
  scanf("%f", &x1);
  printf("enter the second case.");
  scanf("%f", &x2);
  if (f(x1) * f(x2) >= 0) {
    printf("\n invalid case");
  }
  int i = 1;
  do {
    x0 = (x1 + x2) / 2;
    printf("%d\t%f\t%f\t%f\n", i, x1, x2, x0);
    if (f(x1) * f(x0) > 0) {
      x1 = x0;
    } else {
      x2 = x0;
    }
    i++;
  } while (fabs(x2 - x1) > err);
  printf("%f", x0);

  return 0;
}
