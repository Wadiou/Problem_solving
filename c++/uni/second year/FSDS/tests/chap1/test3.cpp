#include <stdio.h>
#include <stdlib.h>

int main() {
    // Step 1: Open the source file for reading
    FILE *source = fopen("source.txt", "r");  // Open the source file in read mode
    if (source == NULL) {
        printf("Error while loading the file\n");
        return 1;
    }
    
    // Step 2: Open the destination file for writing
    FILE *destination = fopen("destination.txt", "w");  // Open the destination file in write mode
    if (destination == NULL) {
        printf("Error while loading the file\n");
        fclose(source);  // Close the source file before returning
        return 1;
    }

    // Step 3: Prepare a buffer to hold lines read from the source file
    char line[2048];  // A buffer to store each line read from the source file
    // Step 4: Read from the source file line by line using fgets

    for (int i = 0;fgets(line, sizeof(line), source) != NULL; i++)
    {
         if (line[0] != '\n') {  // Skip empty lines (newlines only)
            fputs(line, destination);  // Write the line to the destination file
        }
        printf("iteration number %d :\n" , i);
    }

    // Step 5: Close both files
    fclose(source);  // Close the source file
    fclose(destination);  // Close the destination file

    return 0;
}
