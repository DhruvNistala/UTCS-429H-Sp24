//
// Created by Abhinav Chadaga on 1/24/24.
//

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief calculates the sum of an array of integers
 * note that we need to pass the size of the array as an argument
 * because the array itself does not store its size.
 *
 * We cannot use sizeof(a) to get the size of the array because
 * a is a pointer to the first element of the array, and sizeof(a)
 * will just return the size of a pointer (8 bytes on 64-bit machines).
 *
 *
 * @param a array to sum up
 * @param N number of elements in array
 * @return
 */
int sum_arr(const int *a, int N) {
  int sum = 0;
  for (int i = 0; i < N; ++i) {
    sum += a[i];
  }
  return sum;
}

/**
 * @brief Modifies what the input pointer is pointing to.
 *
 * This function takes a pointer to a pointer to an integer as input.
 * It then allocates memory for a new integer, assigns the value 5 to this new
 * integer, and modifies the input pointer to point to this new integer.
 *
 * Note: The caller is responsible for freeing the allocated memory.
 *
 * We must use a pointer to a pointer because we want to modify the input
 * pointer. If we just used a pointer to an integer, we would only be modifying
 * a copy of the input pointer.
 *
 * For example, assume that pointer a points to an integer with value 3. If we
 * pass a to a function, we are passing a copy of the pointer a. If we modify
 * the copy of the pointer a, the original pointer a will not be modified and
 * still points to the integer with value 3.
 *
 * @param ptr Pointer to the pointer that will be modified to point to the newly
 * allocated integer.
 */
void modify_what_pointer_is_pointing_to(int **ptr) {
  int *new_ptr = (int *)malloc(sizeof(int));
  *new_ptr = 5;
  *ptr = new_ptr;  // use dereference operator to modify what ptr is pointing to
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int sum = sum_arr(arr, 5);
  printf("Sum of array: %d\n", sum);  // prints 15

  int *ptr = NULL;
  modify_what_pointer_is_pointing_to(&ptr);
  printf("Value of what ptr is pointing to: %d\n", *ptr);  // prints 5
  return 0;
}