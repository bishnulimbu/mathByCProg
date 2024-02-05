#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Function to define the equation f(x) = x^3 - 2x - 5
float f(float x) { return pow(x, 3) - 2 * x - 5; }

int main() {
  float x1, x2, x0, err = 0.001;
  int i;

  // Input: Initial guesses x1 and x2
  printf("Enter the first case:");
  scanf("%f", &x1);

  printf("Enter the second case:");
  scanf("%f", &x2);

  // Check if the chosen interval is valid
  if (f(x1) * f(x2) > 0) {
    printf("\nInvalid Case....Terminated......");
    exit(0);
  }

  // Initialize iteration counter
  i = 1;

  // Bisection loop
  printf("\n itr \t x1\t\t x2\t\tx0\n");
  do {
    x0 = (x1 + x2) / 2;
    printf("%d\t%f\t%f\t%f\n", i, x1, x2, x0);

    // Update the interval based on the sign of f(x0)
    if (f(x1) * f(x0) > 0) {
      x1 = x0;
    } else {
      x2 = x0;
    }

    i++;

  } while (fabs(f(x0)) > err);

  // Output the result
  printf("\nThe root is = %f", x0);

  return 0;
}
