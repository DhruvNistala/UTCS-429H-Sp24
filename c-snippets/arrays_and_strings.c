//
// Created by Abhinav Chadaga on 1/24/24.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // stack allocated array
  int arr[5] = {1, 2, 3, 4, 5};

  // heap allocated array
  int *arr2 = (int *)malloc(5 * sizeof(int));
  for (int i = 0; i < 5; ++i) {
    arr2[i] = i + 1;
  }

  // Note that a string in C is just an array of characters
  // the last character is the null character '\0'

  char *str = "Hello World";  // this string is stored in read-only memory
  // str[1] = 'a';               this will cause a segmentation fault

  // strlen is a function that returns the length of a string O(N)
  unsigned long len = strlen(str);
  printf("Length of string: %lu\n", len);

  // char array. This is stored on the stack and can be modified
  char str2[] = "Hello World";
  printf("str before: %s\n", str2);

  str2[1] = 'a';  // this is fine
  printf("str after: %s\n", str2);

  // we can copy string from one buffer to another
  // remember to allocate enough space for the null character (1 more than
  // length)
  char *str3 = (char *)malloc(12 * sizeof(char));
  strcpy(str3, str2);  // O(N)
  printf("copied string: %s\n", str3);

  free(arr2);
  free(str3);
  return 0;
}