#include <stdio.h>
#include <stdlib.h>

int main(void) {
  // some data types
  int x = 5;       // int is 4 bytes
  double y = 5.0;  // double is 8 bytes
  int arr[10];     // 4 bytes/int * 10 ints = 40 bytes

  // dynamically allocate 10 contiguous integers on heap
  // value of darr is the memory address of the first of these ints
  int *darr = (int *)malloc(10 * sizeof(int));

  // printing out sizes
  printf("%lu\n", sizeof(x));
  printf("%lu\n", sizeof(y));
  printf("%lu\n", sizeof(arr));
  // even though darr points to an array of 10 ints
  // the value of darr itself is just an 8 byte integer
  printf("%lu\n", sizeof(darr));

  // remember to pair every malloc with a free
  free(darr);
  return 0;
}