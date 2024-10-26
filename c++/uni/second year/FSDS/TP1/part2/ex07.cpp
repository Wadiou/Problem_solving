#include <stdio.h>
#include <string.h>
#define N 50 

struct Patient {
    char Patient_ID[N], First_name[N], Last_name[N], Department[N];
    int Age, Status;
};
struct Patient_num
{
    char Patient_ID[N];
    int number ;
};
void copy_string(char str1[] , char str2[N]){
    for (int i = 0;str1[i] != 0; i++)
    {
        str2[i] = str1[i];
    }
}
void write_to_info()
{
    char filename1[] = "clinic.dat" , filename2[] = "info.dat";
    FILE *file1 = fopen(filename1, "rb") , *file2 = fopen(filename2, "wb");
    Patient patient;
    Patient_num patientID;

    for (int i = 0; fread(&patient, sizeof(Patient), 1, file1) == 1 ; i++)
    {
        patientID.number = i ;
        copy_string(patientID.Patient_ID,patient.Patient_ID);
        fwrite(&patientID,sizeof(Patient_num),1,file2);
    }
    fcloseall();
    
}
void write_to_file() {
    char filename[] = "clinic.dat" ;
    FILE *file = fopen(filename, "ab") ;


    Patient patient;
    
    for (int i = 0; true ; i++)
    {
        printf("Enter the First name of the patient (-1 to stop): ");
        scanf("%s", patient.First_name);
        if (strcmp(patient.First_name,"-1") == 0)
        {
            break;
        }
        printf("Enter the Last name of the patient: ");
        scanf("%s", patient.Last_name);
        printf("Enter the ID of the patient: ");
        scanf("%s", patient.Patient_ID);
        printf("Enter the Department of the patient: ");
        scanf("%s", patient.Department);
        printf("Enter the Age of the patient: ");
        scanf("%d", &patient.Age);
        printf("Enter the Status of the patient : ");
        scanf("%d", &patient.Status);

        fwrite(&patient, sizeof(Patient), 1, file);
    }
    
    fclose(file);
    write_to_info();
}

void Status_interpretation(char status[N] , int number){
    
    switch (number)
    {
    case 0:
        {
            char string[] = "Waiting for diagnosis";
            copy_string(string,status);
        }

        break;
    case 1:
        {
            char string[] = "Diagnosis complete";
            copy_string(string,status);
        }

        break;
    case 2:
        {
            char string[] = "Waiting for treatment";
            copy_string(string,status);
        }

        break;
    case 3:
        {
            char string[] = "Under treatment";
            copy_string(string,status);
        }

        break;
    case 4:
        {
            char string[] = "Treatment complete";
            copy_string(string,status);
        }

        break;
    
    default:
        break;
    }

}
void Extracting_list() {
    int choice;
    int status_criteria = -1;  
    char department_criteria[N] = "";  
    char filename[] = "clinic.dat", status[N];
    FILE *file = fopen(filename, "rb");
    


    printf("\nChoose an extraction option:\n");
    printf("1. Extract all patients\n");
    printf("2. Extract patients by status\n");
    printf("3. Extract patients by department\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 2) {
        printf("Enter the status to filter by (0-4): ");
        scanf("%d", &status_criteria);
    } else if (choice == 3) {
        printf("Enter the department to filter by: ");
        scanf("%s", department_criteria);
    }

    Patient patient;
    while (fread(&patient, sizeof(Patient), 1, file) == 1) {
        if (status_criteria != -1 && patient.Status != status_criteria) {
            continue;  
        }
        
        if (department_criteria[0] != '\0' && strcmp(patient.Department, department_criteria) != 0) {
            continue; 
        }
        
        printf("\nPatient Information:\n");
        printf("First name: %s\n", patient.First_name);
        printf("Last name: %s\n", patient.Last_name);
        printf("ID: %s\n", patient.Patient_ID);
        printf("Department: %s\n", patient.Department);
        printf("Age: %d\n", patient.Age);
        Status_interpretation(status, patient.Status);
        printf("Status: %s\n", status);
    }

    fclose(file);
}

void Modify_status(char ID[N]) {
    char filename[] = "clinic.dat" , temp[N];
    FILE *file = fopen(filename, "rb+");  
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Patient patient;
    bool found = false;

    while (fread(&patient, sizeof(Patient), 1, file) == 1) {
        if (strcmp(patient.Patient_ID, ID) == 0) {
            
            found = true;
            Status_interpretation(temp,patient.Status);
            printf("Patient found. Current status: %s\n", temp);
            printf("Enter new status: ");
            scanf("%d", &patient.Status);

            fseek(file, -sizeof(Patient), SEEK_CUR);

            fwrite(&patient, sizeof(Patient), 1, file);

            printf("Status updated successfully.\n");
            break;
        }
    }

    if (!found) {
        printf("Patient with ID %s not found.\n", ID);
    }

    fclose(file);
}
void Delete_patient(char ID[N]) {
    char filename[] = "clinic.dat" ;
    char temp_filename[] = "temp1.dat"  ;
    FILE *file1 = fopen(filename, "rb");  
    FILE *temp1_file = fopen(temp_filename, "wb"); 

    Patient patient;
    int found = 0 ;

    while (fread(&patient, sizeof(Patient), 1, file1) == 1) {
        if (strcmp(patient.Patient_ID, ID) == 0) {
            found = 1;
            printf("Patient with ID %s found and deleted.\n", ID);
        } else {
            fwrite(&patient, sizeof(Patient), 1, temp1_file); 
        }
    }

    fclose(file1);
    fclose(temp1_file);

    if (found) {
        remove(filename);  
        rename(temp_filename, filename);

    } else {
        printf("Patient with ID %s not found.\n", ID);
        remove(temp_filename);  
    }
    write_to_info();
}
int Retrive_number(char ID[]){
    char  filename[] = "info.dat";
    FILE  *file = fopen(filename, "rb");
    Patient_num patientID ;
    while(fread(&patientID,sizeof(Patient_num),1,file) == 1)
    {
        if (strcmp(patientID.Patient_ID,ID) == 0)
        {
            return patientID.number ;
        }
        
    }
    return -1 ;
    
}
void Display_patient_by_number(int record_number) {
    char filename[] = "clinic.dat", status[N];
    FILE *file = fopen(filename, "rb");
    fseek(file, sizeof(Patient) * record_number, SEEK_SET);

    Patient patient;
    if (fread(&patient, sizeof(Patient), 1, file) == 1) {
        Status_interpretation(status, patient.Status);
        printf("ID: %s\nFirst name: %s\nLast name: %s\nDepartment: %s\nAge: %d\nStatus: %s\n\n",
               patient.Patient_ID, patient.First_name, patient.Last_name, patient.Department, patient.Age, status);
    } else {
        printf("Record number %d not found.\n", record_number);
    }

    fclose(file);
}

void Modify_patient_by_number(int record_number) {
    char filename[] = "clinic.dat";
    FILE *file = fopen(filename, "rb+");

    fseek(file, sizeof(Patient) * record_number, SEEK_SET);

    Patient patient;
    if (fread(&patient, sizeof(Patient), 1, file) == 1) {
        printf("Enter new status for Patient ID %s: ", patient.Patient_ID);
        scanf("%d", &patient.Status);

        fseek(file, -sizeof(Patient), SEEK_CUR);
        fwrite(&patient, sizeof(Patient), 1, file);

        printf("Patient status updated.\n");
    } else {
        printf("Record number %d not found.\n", record_number);
    }

    fclose(file);
}


int main() {
    int choice;
    char ID[N];
    int record_number;

    do {
        printf("\nChoose an operation:\n");
        printf("1. Add a new patient\n");
        printf("2. Extract list of patients\n");
        printf("3. Modify a patient's status by ID\n");
        printf("4. Delete a patient by ID\n");
        printf("5. Retrieve a patient's record number by ID\n");
        printf("6. Display patient information by record number\n");
        printf("7. Modify a patient's status by record number\n");
        printf("8. Terminate\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                write_to_file();
                break;
            case 2:
                Extracting_list();
                break;
            case 3:
                printf("Enter the ID of the Patient: ");
                scanf("%s", ID);
                Modify_status(ID);
                break;
            case 4:
                printf("Enter the ID of the Patient: ");
                scanf("%s", ID);
                Delete_patient(ID);
                break;
            case 5:
                printf("Enter the ID of the Patient: ");
                scanf("%s", ID);
                record_number = Retrive_number(ID);
                if (record_number != -1) {
                    printf("Record number of patient with ID %s is: %d\n", ID, record_number);
                } else {
                    printf("Patient with ID %s not found.\n", ID);
                }
                break;
            case 6:
                printf("Enter the record number to display: ");
                scanf("%d", &record_number);
                Display_patient_by_number(record_number);
                break;
            case 7:
                printf("Enter the record number to modify: ");
                scanf("%d", &record_number);
                Modify_patient_by_number(record_number);
                break;
            case 8:
                printf("Terminating...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}
