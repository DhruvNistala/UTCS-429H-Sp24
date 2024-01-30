// Written by Dhruv Nistala on 1/30/2024

#include  <stdio.h>

int main() {
    char buffer[100];

    // output text to console
    printf("Hello world!\n");

    // input text from console
    printf("enter a string: ");
    fgets(buffer, sizeof(buffer), stdin);

    printf("you entered %s", buffer);
}