#include <stdio.h>
#include <string.h>

struct Student {
    char First_name[100], Last_name[100], password[50];
};



void encrypt_password(char password[50]) {
    for (int i = 0; password[i] != 0; i++) {
        char C = password[i];
        if ((C >= 'A' && C <= 'Z') ) {
            password[i] = (((C - 'A') + 3) % 26) + 'A';
        } else if (C >= '0' && C <= '9') {
            password[i] = (((C - '0') + 3) % 10) + '0';
        }
        else if (C >= 'a' && C <= 'z') {
            password[i] = (((C - 'a') + 3) % 26) + 'a';
        }
    }
}

void decrypt_password(char password[50]) {
    for (int i = 0; password[i] != 0; i++) {
        char C = password[i];
        if ((C >= 'A' && C <= 'Z') ) {
            password[i] = (((C - 'A') - 3 + 26) % 26) + 'A';
        } else if (C >= '0' && C <= '9') {
            password[i] = (((C - '0') - 3 + 10) % 10) + '0';
        }
        else if (C >= 'a' && C <= 'z') {
            password[i] = (((C - 'a') - 3 + 26 ) % 26) + 'a';
        }
    }
}

void write_to_file() {
    Student student;
    char filename[] = "std-pwd.txt";
    FILE *file = fopen(filename, "a");

    while (true) {
        printf("Enter the First name of the Student (-1 to stop): ");
        scanf("%s", student.First_name);
        if (strcmp(student.First_name, "-1") == 0) {
            break;
        }
        printf("Enter the Last name of the Student: ");
        scanf("%s", student.Last_name);
        printf("Enter the Password of the Student: ");
        scanf("%s", student.password);
        fprintf(file, "%s %s %s\n", student.First_name, student.Last_name, student.password);
    }
    fclose(file);
}

void encrypt_file() {
    Student student;
    char filename[] = "std-pwd.txt", destination_filename[] = "encry-std-pwd.txt";
    FILE *file = fopen(filename, "r");
    FILE *destination = fopen(destination_filename, "w");

    while (fscanf(file, "%s %s %s\n", student.First_name, student.Last_name, student.password) == 3) {
        encrypt_password(student.password);
        fprintf(destination, "%s %s %s\n", student.First_name, student.Last_name, student.password);
    }

    fclose(file);
    fclose(destination);
    printf("File encrypted successfully.\n");
}

void decrypt_file() {
    Student student;
    char filename[] = "encry-std-pwd.txt", destination_filename[] = "decry-std-pwd.txt";
    FILE *file = fopen(filename, "r");
    FILE *destination = fopen(destination_filename, "w");

    while (fscanf(file, "%s %s %s\n", student.First_name, student.Last_name, student.password) == 3) {
        decrypt_password(student.password);
        fprintf(destination, "%s %s %s\n", student.First_name, student.Last_name, student.password);
    }

    fclose(file);
    fclose(destination);
    printf("File decrypted successfully.\n");
}

int main() {
    int choice;

    do {
        printf("\nChoose an operation:\n");
        printf("1. Write to file\n");
        printf("2. Encrypt file\n");
        printf("3. Decrypt file\n");
        printf("4. Terminate\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                write_to_file();
                break;
            case 2:
                encrypt_file();
                break;
            case 3:
                decrypt_file();
                break;
            case 4:
                printf("Terminating...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
