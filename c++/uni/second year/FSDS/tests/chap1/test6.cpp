#include <cstdio>  // C-style file input/output functions

// Record to represent a patient
struct Patient {
    char name[100];
    int age;
    char diagnostic[100];
};

int main() {
    // Create an array to store patient data
    Patient patients[3];

    // Fill the table with the patients' data
    Patient patient1 = {"Ahmed Benarab", 35, "Flue"};
    Patient patient2 = {"Leila Slimani", 28, "Covid19"};
    Patient patient3 = {"Laarmi Moustafooui", 82, "Parkinson"};
    
    // Assigning the patients to the array
    patients[0] = patient1;
    patients[1] = patient2;
    patients[2] = patient3;

    // Part 1: Writing data to a binary file
    FILE *file = fopen("patients.dat", "wb");  // Open binary file for writing
    if (file == NULL) {
        printf("Error while opening the file for writing\n");
        return 1;
    }

    // Write the patient data to the binary file
    size_t elementsWritten = fwrite(patients, sizeof(Patient), 3, file);
    if (elementsWritten != 3) {
        printf("Error while writing data to the file\n");
        fclose(file);
        return 1;
    } else {
        printf("Success writing data to the file.\n");
    }

    fclose(file);  // Close the file after writing

    // Part 2: Reading data from the binary file
    file = fopen("patients.dat", "rb");  // Open binary file for reading
    if (file == NULL) {
        printf("Error while opening the file for reading\n");
        return 1;
    }

    // Read the data from the binary file
    size_t elementsRead = fread(patients, sizeof(Patient), 3, file);
    if (elementsRead != 3) {
        printf("Error while reading data from the file\n");
        fclose(file);
        return 1;
    }

    // Print the retrieved data
    for (int i = 0; i < 3; i++) {
        printf("Patient %d:\n", i + 1);
        printf("Name: %s\n", patients[i].name);
        printf("Age: %d\n", patients[i].age);
        printf("Diagnostic: %s\n", patients[i].diagnostic);
        printf("\n");
    }

    fclose(file);  // Close the file after reading

    return 0;
}
