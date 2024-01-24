#include <stdio.h>

int main(void) {
  // if/else statement
  int x = 10;
  if (x > 5) {
    printf("x is greater than 5!\n");
  } else {
    printf("x is less than 5\n");
  }

  // for loop
  printf("For loop:\n");
  for (int i = 0; i < 10; i++) {
    printf("Loop iteration: %d\n", i);
  }

  // while loop (equivalent way as for loop)
  printf("While loop:\n");
  int i = 0;
  while (i < 10) {
    printf("Loop iteration: %d\n", i);
    i++;
  }

  return 0;
}