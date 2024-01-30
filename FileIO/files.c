#include <stdio.h>

int main() {
    FILE *file; // file pointer
    char data[] = "Hello world!\n";

    file = fopen("output.txt", "w"); // open file for writing
    if (!file) { // check if file not null
        perror("Error opening file");
        return 1; // return status code that something went wrong. Generally, status code 0 means everything went well
    }

}