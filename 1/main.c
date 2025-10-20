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

// #include <stdio.h>
//
// #define LOWER 0
// #define UPPER 300
// #define STEP 20
//
// int main() {
//   int fahr;
//   for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
//     printf("%d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
//   }
//   return 0;
// }

// print EOF value
//  #include <stdio.h>
//
//  int main() {
//    int x = EOF;
//    printf("%d", x);
//    return 0;
//  }
//

// #include <stdio.h>
//
// int main() {
//   long nc;
//
//   nc = 0;
//
//   while (getchar() != EOF) {
//     ++nc;
//   }
//
//   printf("%ld\n", nc);
//
//   return 0;
// }

// #include <stdio.h>
//
// int main() {
//   double nc;
//
//   for (nc = 0; getchar() != EOF; ++nc)
//     ;
//
//   printf("%0.f\n", nc);
//
//   return 0;
// }

// exercise 1.8
//  #include <stdio.h>
//
//  int main() {
//    int newline, tab, blankspace, c;
//
//    newline = tab = blankspace = 0;
//
//    while ((c = getchar()) != EOF) {
//      if (c == '\n')
//        ++newline;
//      if (c == '\t')
//        ++tab;
//      if (c == ' ')
//        ++blankspace;
//    }
//
//    printf("newline: %d,tab: %d,blankspace: %d", newline, tab, blankspace);
//    return 0;
//  }

// exercise 1.9

// #include <stdio.h>
//
// int main() {
//   int c;
//   while ((c = getchar()) != EOF) {
//     if (c == ' ') {
//       // first space we print
//       putchar(c);
//       // the next one we just do nothing
//       while ((c = getchar()) == ' ')
//         ;
//     }
//     putchar(c);
//   }
//
//   return 0;
// }

// #include <stdio.h>
//
// int main() {
//   int in_blank = 0;
//   int c;
//
//   while ((c = getchar()) != EOF) {
//     if (c == ' ' && in_blank)
//       continue;
//     if (c == ' ') {
//       in_blank = 1;
//     } else {
//       in_blank = 0;
//     }
//     putchar(c);
//   }
//
//   return 0;
// }

#include <stdio.h>

int main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\t');
    } else if (c == '\b') {
      putchar('\b');
    } else if (c == '\\') {
      putchar('\\');
    } else {
      putchar(c);
    }
  }
}
