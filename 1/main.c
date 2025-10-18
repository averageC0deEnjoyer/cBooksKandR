// #include <stdio.h>
//
// int main() {
//   float celsius, fahr;
//   float lower, upper, step;
//
//   lower = 0;
//   upper = 300;
//   step = 20;
//   fahr = lower;
//
//   while (fahr < upper) {
//     celsius = (5.0 / 9.0) * (fahr - 32.0);
//     printf("%3.0f\t %6.1f\n", fahr, celsius);
//     fahr += step;
//   }
//   return 0;
// }

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
  int fahr;
  for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
    printf("%d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
  }
  return 0;
}
