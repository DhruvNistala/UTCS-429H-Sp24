#include <stdio.h>
#include "filea.h"
#include "fileb.h"

int a = 10;

int main() {

    char arr[100];
    char* arr2 = arr;
    sizeof(arr);
    sizeof(arr2);

    printf("My favorite number is %d\n", a);
    f();
    printf("My favorite number is %d\n", a);
    return 0;
}
