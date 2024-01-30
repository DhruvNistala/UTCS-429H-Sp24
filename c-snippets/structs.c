//
// Created by Abhinav Chadaga on 1/24/24.
//
#include <stdio.h>
#include <stdlib.h>

/* Defining a simple, singly linked int list in C */

typedef struct node {
  struct node *next;
  int val;
} node_t, *node_ptr_t;

int main() {
  // initializing node structs
  node_t n1 = {NULL, 1};
  node_t n2 = {NULL, 2};
  node_t n3 = {NULL, 3};

  // accessing and modifying fields
  n1.next = &n2;
  n2.next = &n3;

  // print out list by creating a
  // tmp pointer to iterate through list
  node_ptr_t curr = &n1;  // node_ptr_t is the same as struct node *
  while (curr != NULL) {
    printf("%d\n", curr->val);
    curr = curr->next;
  }

  // dynamically allocate a new node
  node_ptr_t n4 = (node_ptr_t)malloc(sizeof(node_t));
  n3.next = n4;

  // n4 is a pointer, so use arrow operator to dereference it
  // (get actual struct) and access its fields
  n4->val = 4;
  n4->next = NULL;
  return 0;
}