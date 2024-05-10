#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_LENGTH 1000

int main() {
    char input[MAX_LENGTH];
    char sign = '+';
    char num[MAX_LENGTH];
    int numIndex = 0;
    int integer[MAX_LENGTH];

    // Read the input string from the keyboard
    printf("Enter a string of numbers (maximum 1000 characters): ");
    fgets(input, sizeof(input), stdin);

    // Check if the input starts with a non-numeric character
    if (isdigit(input[0]) || input[0] == '+') {
        sign = '+';
    } else if (input[0] == '-') {
        sign = '-';
    }

    // Save each character from the input string in the array num[]
    for (int i = (sign == '-' ? 1 : 0); input[i] != '\0'; i++) {
        num[numIndex++] = input[i];
    }

    // Convert characters from the num array to integers and store them in the integer array
    for (int i = 0; i < numIndex; i++) {
        integer[i] = num[i] - '0';
    }

    // Print the string of numbers with the appropriate sign
    printf("%c ", sign);
    for (int i = 0; i < numIndex; i++) {
        printf("%c", num[i]);
    }
    printf("\n");

    // Print the array num[]
    printf("Array num[]: ");
    for (int i = 0; i < numIndex; i++) {
        printf("%c ", num[i]);
    }
    printf("\n");

    // Print the integer array
    printf("Integer array: ");
    for (int i = 0; i < numIndex - 1; i++) {
        printf("%d ", integer[i]);
    }
    printf("\n");

    return 0;
}
