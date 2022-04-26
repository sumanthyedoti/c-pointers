#include <stdio.h>

/**
 * NULL pointer means the pointer does not point to anything
 * NULL pointer does not point to any area of memory
 * NULL is defined in many libraries as:
 *      #define NULL ((void *)0)
 */

int main() {
  /** Two null pointers will be equal to each other */
  int *p = NULL;
  int *q = NULL;
  printf("%d\n", p == q); // equals to 1

  /** we can assign a zero to a pointer, but we cannot assign any other integer
   * value */
  int *np = 0;
  printf("%p -> np in a NULL pointer\n", np);

  /** A pointer can be used as the sole operand of a logical expression */
  if (p) {
    printf("'p' is not a NULL pointer");
  } else {
    printf("'p' is a NULL pointer");
  }

  return 0;
}
