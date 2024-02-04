// #include <stdio.h>
// #include <math.h>
//
// float
//
// int main(){
//   printf("hello world\n");
//     return 0;
// }

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float f(float x) { return pow(x, 3) - 2 * x - 5; }

int main() {
  float x1, x2, x0, err = 0.001;
  int i;

  printf("Enter the first case:");
  scanf("%f", &x1);

  printf("Enter the second case:");
  scanf("%f", &x2);

  if (f(x1) * f(x2) > 0) {
    printf("\nInvalid Case....Terminated......");
    exit(0);
  }
  i = 1;
  printf("\n itr \t x1\t\t x2\t\tx0\n");
  do {
    x0 = (x1 + x2) / 2;
    printf("%d\t%f\t%f\t%f\n", i, x1, x2, x0);
    if (f(x1) * f(x0) > 0) {
      x1 = x0;
    } else {
      x2 = x0;
    }

    i++;

  } while (fabs(f(x0)) > err);

  printf("\nThe root is = %f", x0);

  return 0;
}
