#include <stdio.h>

// Define the structure for Patient
struct Patient {
    char name[100];
    int age;
    char diagnostic[100];
};

int main() {
    struct Patient patients[3];  // Array to store 3 patients

    // Populate patient data
    for (int i = 0; i < 3; ++i) {
        printf("Enter name of patient %d: ", i + 1);
        scanf("%s", patients[i].name);
        printf("Enter age of patient %d: ", i + 1);
        scanf("%d", &patients[i].age);
        printf("Enter diagnostic of patient %d: ", i + 1);
        scanf("%s", patients[i].diagnostic);
    }

    // Open the file for writing (formatted output)
    FILE *file = fopen("patients.txt", "w");
    if (file == NULL) {
        printf("Error while opening the file\n");
        return 1;
    }

    // Write patient data into the file using fprintf
    for (int i = 0; i < 3; i++) {
        fprintf(file, "Name: %s\n", patients[i].name);
        fprintf(file, "Age: %d\n", patients[i].age);
        fprintf(file, "Diagnostic: %s\n", patients[i].diagnostic);
        fprintf(file, "\n");  // Empty line to separate the patients’ records
    }

    fclose(file);  // Close the file after writing

    // Open the file for reading (formatted input)
    file = fopen("patients.txt", "r");
    if (file == NULL) {
        printf("Error while loading the file\n");
        return 1;
    }

    // Read and print patient data from the file using fscanf
    for (int i = 0; i < 3; i++) {
        fscanf(file, "Name: %s\n", patients[i].name);
        fscanf(file, "Age: %d\n", &patients[i].age);
        fscanf(file, "Diagnostic: %s\n", patients[i].diagnostic);
        fgetc(file);  // Read the empty line at the end of each record

        // Print the data read from the file
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Diagnostic: %s\n", patients[i].diagnostic);
    }

    fclose(file);  // Close the file after reading

    return 0;
}
