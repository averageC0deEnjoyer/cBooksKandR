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

// 1-10
// #include <stdio.h>
//
// int main() {
//   int c;
//
//   while ((c = getchar()) != EOF) {
//     if (c == '\t') {
//       putchar('\t');
//     } else if (c == '\b') {
//       putchar('\b');
//     } else if (c == '\\') {
//       putchar('\\');
//     } else {
//       putchar(c);
//     }
//   }
// }

// #include <stdio.h>
//
// #define IN 1
// #define OUT 0
//
// int main() {
//   int c;
//
//   while ((c = getchar()) != EOF) {
//     if (c == '\t') {
//       putchar('\\');
//       putchar('t');
//     } else if (c == '\b') {
//       putchar('\\');
//       putchar('b');
//     } else if (c == '\\') {
//       putchar('\\');
//       putchar('\\');
//     } else {
//       putchar(c);
//     }
//   }
//   return 0;
// }

// Sample Question
//
// #include <stdio.h>
//
// #define IN 1
// #define OUT 0
//
// int main() {
//   // we have '\t' , '\n' , and ' '
//   int c, nl, nc, nw, state;
//
//   nl = nc = nw = 0;
//   state = OUT;
//
//   while ((c = getchar()) != EOF) {
//     ++nc;
//
//     if (c == '\n') {
//       ++nl;
//     }
//
//     if (c == '\n' || c == '\t' || c == ' ') {
//       state = OUT;
//     } else if (state == OUT) {
//       state = IN;
//       ++nw;
//     }
//   }
//
//   printf("newline %d, newchar %d, newword %d\n", nl, nc, nw);
//
//   return 0;
// }

// 1-12
// #include <stdio.h>
//
// int main() {
//   int c;
//   while ((c = getchar()) != EOF) {
//     if (c == '\t' || c == '\n' || c == ' ') {
//       putchar('\n');
//     } else {
//       putchar(c);
//     }
//   }
//   return 0;
// }

// Sample Question
//
// #include <stdio.h>
//
// int main() {
//
//   int c, i, nwhite, nother;
//   int ndigit[10];
//
//   nwhite = nother = 0;
//   for (i = 0; i < 10; ++i) {
//     ndigit[i] = 0;
//   }
//
//   while ((c = getchar()) != EOF) {
//     if (c >= '0' && c <= '9') {
//       ++ndigit[c - '0'];
//     } else if (c == ' ' || c == '\t' || c == '\n') {
//       ++nwhite;
//     } else {
//       ++nother;
//     }
//   }
//
//   printf("digits= ");
//   for (i = 0; i < 10; ++i) {
//     printf(" %d", ndigit[i]);
//   }
//   printf("whitespace %d, other %d", nwhite, nother);
//
//   return 0;
// }

// 1-13
//
// #include <stdio.h>
//
// #define MAXWORDLENGTH 10
//
// #define IN 1
// #define OUT 0
//
// int main() {
//   int words_length_frequency[MAXWORDLENGTH];
//   int i, c, len, overflow, state;
//
//   // for the histogram
//   int max = 0;
//
//   len = overflow = 0;
//
//   // idk what is this state used for (not looking solution yet, just follow
//   from
//   // example)
//   state = OUT;
//
//   // initialize element value in the array
//   for (i = 0; i < MAXWORDLENGTH; ++i) {
//     words_length_frequency[i] = 0;
//   }
//
//   // increase the value
//   while ((c = getchar()) != EOF) {
//     if (len > MAXWORDLENGTH) {
//       ++overflow;
//     } else if (c == '\t' || c == '\n' || c == ' ') {
//       ++words_length_frequency[len];
//       len = 0;
//       state = OUT;
//     } else {
//       ++len;
//     }
//   }
//
//   // find max frequency from the array that has been filled
//   // going to be used for the histogram
//   for (i = 0; i < MAXWORDLENGTH; ++i) {
//     if (words_length_frequency[i] > max) {
//       max = words_length_frequency[i];
//     }
//   }
//
//   // histogram
//   for (i = max; i > 0; --i) {
//     for (int j = 0; j < MAXWORDLENGTH; ++j) {
//       if (words_length_frequency[j] >= i) {
//         printf("x ");
//       } else {
//         printf("  ");
//       }
//     }
//     printf("\n");
//   }
//
//   // 10 actually can use MAXWORDLENGTH
//   for (i = 0; i < 10; ++i) {
//     printf("%d ", words_length_frequency[i]);
//   }
//   printf("\n");
//
//   for (i = 0; i < 10; ++i) {
//     printf("%d ", i);
//   }
//   printf("\n");
//
//   printf("Overflow: %d\n", overflow);
//
//   return 0;
// }

// 1-13 MODEL solution
// #include <stdio.h>
//
// #define MAXHIST 15
// #define MAXWORD 11
// #define IN 1
// #define OUT 0
//
// int main() {
//   int c, i, nc, state;
//   int len;
//   int maxvalue;
//   int ovflow;
//   int wl[MAXWORD];
//
//   state = OUT;
//   nc = 0;
//   ovflow = 0;
//
//   for (i = 0; i < MAXWORD; ++i) {
//     wl[i] = 0;
//   }
//
//   // increase the frequency for the element in the array
//   while ((c = getchar()) != EOF) {
//     if (c == ' ' || c == '\t' || c == '\n') {
//       state = OUT;
//       if (nc > 0) {
//         if (nc < MAXWORD) {
//           ++wl[nc];
//         } else {
//           ++ovflow;
//         }
//       }
//       nc = 0;
//     } else if (state == OUT) {
//       state = IN;
//       nc = 1;
//     } else {
//       ++nc;
//     }
//   }
//
//
//   maxvalue = 0;
//   for (i = 1; i < MAXWORD; ++i) {
//     if (wl[i] > maxvalue) {
//       maxvalue = wl[i];
//     }
//   }
//
//   for (i = 1; i < MAXWORD; ++i) {
//     printf("%5d - %5d : ", i, wl[i]);
//     if (wl[i] > 0) {
//       if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
//         len = 1;
//     } else {
//       len = 0;
//     }
//     while (len > 0) {
//       putchar('*');
//       --len;
//     }
//     putchar('\n');
//   }
//   if (ovflow > 0)
//     printf("There are %d words >= %d\n", ovflow, MAXWORD);
//
//   return 0;
// }

// 1-14
// #include <stdio.h>

// int main(){
// return 0;
// }
// skip
//

// 1-15 skip
//
// 1-19

#include <stdio.h>
#define MAXLENGTH 1000

int get_line(char s[], int max_length);
void reverse_string(char s[], int i, int j);

int main() {
  // get the string
  // reverse the string
  //
  char line[MAXLENGTH];
  int len = 0;
  int start = 0;

  len = get_line(line, MAXLENGTH);
  printf("%d", len);

  // dont forget \n and \0
  reverse_string(line, start, len - 1);

  printf("%s", line);

  return 0;
}

// will fill s array and return length of the inputted line
int get_line(char s[], int max_length) {
  // i for counting the line length
  int i, c, j;
  j = 0;
  for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
    if (i < max_length - 2)
      s[j++] = c;
  }
  if (c == '\n') {
    s[j++] = c;
    ++i;
  }
  s[j] = '\0';

  return i;
}

void reverse_string(char s[], int i, int j) {
  char temp;
  while (i < j) {
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    ++i;
    --j;
  }
}
