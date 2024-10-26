#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    // Part 1: Write one character 'A' to the file using fputc
    FILE *file = fopen("caractere.txt", "w+");  // Open the file for writing
    if (file == NULL) {
        printf("File loading fails\n");
        return 1;
    }
    
    // Write the character 'A' into the file
    int res = fputc('A', file);
    
    if (res != EOF) {
        printf("The character has been successfully written in the file.\n");
    } else {
        printf("Error while writing in the file.\n");
    }
    //move back from current position by 1 byte
    fseek(file, -1, SEEK_CUR);

    // Read and print the content character by character using fgetc
    char character = fgetc(file);
    if (character != EOF) {
        printf("char: %c\n", character);  // Print the character read
    } else {
        printf("End of file achieved.\n");
    }

    fclose(file);  // Close the file after reading

    return 0;
}
