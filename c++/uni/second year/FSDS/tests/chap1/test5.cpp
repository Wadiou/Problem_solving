#include <stdio.h>

struct Patient {
    char name[100];
    int age;
    char diagnostic[100];
};

int main() {
    struct Patient patients[3];

    for (int i = 0; i < 3; ++i) {
        printf("Enter name of patient %d: ", i + 1);
        scanf(" %[^\n]", patients[i].name);  // Use %[^\n] to read a line with spaces

        printf("Enter age of patient %d: ", i + 1);
        scanf("%d", &patients[i].age);

        getchar();  // Consume the leftover newline character
        printf("Enter diagnostic of patient %d: ", i + 1);
        scanf(" %[^\n]", patients[i].diagnostic);  // Use %[^\n] to read a line with spaces
    }

    // Open the file for writing
    FILE *file = fopen("patients.txt", "w");
    if (file == NULL) {
        printf("Error while opening the file\n");
        return 1;
    }

    // Write patient data into the file
    for (int i = 0; i < 3; i++) {
        fprintf(file, "Name: %s\n", patients[i].name);
        fprintf(file, "Age: %d\n", patients[i].age);
        fprintf(file, "Diagnostic: %s\n", patients[i].diagnostic);
        fprintf(file, "\n");
    }

    fclose(file);  // Close the file after writing

    // Open the file for reading
    file = fopen("patients.txt", "r");
    if (file == NULL) {
        printf("Error while loading the file\n");
        return 1;
    }

    // Read patient data from the file and print
    for (int i = 0; i < 3; i++) {
        fscanf(file, "Name: %99[^\n]\n", patients[i].name);
        fscanf(file, "Age: %d\n", &patients[i].age);
        fscanf(file, "Diagnostic: %99[^\n]\n", patients[i].diagnostic);
        fgetc(file);  // Read the empty line

        printf("\nPatient %d:\n", i + 1);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Diagnostic: %s\n", patients[i].diagnostic);
    }

    fclose(file);  // Close the file after reading

    return 0;
}
