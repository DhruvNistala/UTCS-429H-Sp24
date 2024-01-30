//
// Created by Abhinav Chadaga on 1/24/24.
//
#include <stdio.h>

int main() {
  int x = 10;

  // ptr is an integer pointer whose
  // value is the memory address of x
  int *ptr = &x;

  printf("Value of x: %d\n", x);      // prints 10
  printf("Value of ptr: %p\n", ptr);  // prints address of x, something like 0x16db0b498

  // dereference ptr to get the value
  // stored at "ptr" memory address
  printf("Value ptr is pointing to: %d\n", *ptr);  // prints 10
  return 0;
}