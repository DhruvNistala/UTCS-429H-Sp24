#include <stdio.h>

int main(void) {
  // if/else statement demo
  int x = 10;
  if (x > 5) {
    printf("x is greater than 5!\n");
  } else {
    printf("x is less than 5\n");
  }
  printf("\n");

  // for loop demo
  printf("For loop:\n");
  for (int i = 0; i < 10; i++) {
    printf("Loop iteration: %d\n", i);
  }
  printf("\n");

  // while loop (equivalent way as for loop)
  printf("While loop:\n");
  int i = 0;
  while (i < 10) {
    printf("Loop iteration: %d\n", i);
    i++;
  }
  printf("\n");

  // switch statement demo
  int num = 3;
  switch (num) {
    case 1:
      printf("You entered one.\n");
      break;
    case 2:
      printf("You entered two.\n");
      break;
    case 3:
      printf("You entered three.\n");
      break;
    default:
      printf("You entered a number other than 1, 2, or 3.\n");
      break;
  }

  return 0;
}