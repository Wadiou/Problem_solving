#include <stdio.h>

int main() {
    FILE *file = fopen("Patient.dat", "wb");  // Open the text file for reading
    if (file == NULL) {
        printf("Patient.txt inaccessible: file=%p\n", file);  // If the file cannot be opened, print this
    } else {
        printf("Patient.txt accessible: file=%p\n", file);    // If the file is accessible, print this
    }
    
    if (file != NULL) {
        printf("Close Patient\n");   // Print message before closing
        fclose(file);  // Close the file
    }

    return 0;
}
