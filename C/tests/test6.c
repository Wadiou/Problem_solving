#include <stdio.h>

int main() {
    // Create a char array to hold the full name
    char fullName[6];

    // Ask the user to type their full name
    printf("Type your full name: \n");

    // Get and save the full name the user types (including spaces)
    fgets(fullName, sizeof(fullName), stdin);

    // Remove the newline character if it's there
    printf("\\0 in ascii is %d\n" , fullName[6] );
    // Print each character of the name on a new line (demonstrating iteration)
    for (int i = 0; fullName[i] != '\0'; i++) {
        printf("%c\n", fullName[i]);
    }

    return 0;
}