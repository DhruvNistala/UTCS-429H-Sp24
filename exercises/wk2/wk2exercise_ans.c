#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the sum of numbers from the file
int calculate_file_sum(const char *filename) {
    FILE *file = fopen(filename, "r");

    // Check if the file is opened successfully
    if (file == NULL) {
        printf("Error opening file. Make sure the file exists and is accessible.\n");
        exit(EXIT_FAILURE);
    }

    int numFromFile, sum = 0;

    // Read numbers from the file and calculate the sum
    while (fscanf(file, "%d", &numFromFile) != EOF) {
        sum += numFromFile;
    }

    // Close the file
    fclose(file);

    return sum;
}

int main() {
    char filename[100];
    int fileSum, userInput;
    char inputBuffer[100];
    int validInput;

    // Part 1: Calculate and print the sum of numbers from the file
    printf("Enter the filename (including extension) of a text file: ");
    scanf("%99s", filename);  // Limit the input to 99 characters to avoid buffer overflow

    fileSum = calculate_file_sum(filename);
    printf("Sum of numbers from the file: %d\n", fileSum);

    // Part 2: Repeatedly prompt the user for input numbers
    while (1) {
        printf("Enter a number (or 'done' to exit): ");
        validInput = scanf("%99s", inputBuffer);  // Limit the input to 99 characters

        // Check if the user wants to exit
        if (strcmp(inputBuffer, "done") == 0) {
            break;
        }

        // Validate the user input
        if (validInput != 1 || sscanf(inputBuffer, "%d", &userInput) != 1) {
            printf("Invalid Number. Please enter a valid integer.\n");

            // Clear the input buffer to handle subsequent input
            while (getchar() != '\n') {
                // consume the invalid input
            }

            continue;
        }

        // Update the sum and display the current sum
        fileSum += userInput;
        printf("Current Sum: %d\n", fileSum);
    }

    return 0; // Exit successfully
}
