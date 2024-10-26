#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define N 50

struct TPatient {
    char Name[N];
    int Age;
    int patient_ID;
    bool Delete;
};

struct TBlock {
    struct TPatient patients[N];
    int length;
};

struct THeader {
    int Written_blocks;
    int Inserted_records;
    int Erased_records;
};

struct TIndex {
    int block_index;
    int patient_index;
};

int Header(const char Filename[], int field) {
    THeader temp;
    FILE *file = fopen(Filename, "rb");
    fread(&temp, sizeof(THeader), 1, file);
    fclose(file);
    switch (field) {
        case 1: return temp.Written_blocks;
        case 2: return temp.Inserted_records;
        case 3: return temp.Erased_records;
        default: return -1;
    }
}

void SetHeader(const char Filename[], int field, int value) {
    THeader temp;
    FILE *file = fopen(Filename, "rb+");
    fread(&temp, sizeof(THeader), 1, file);
    switch (field) {
        case 1: temp.Written_blocks = value; break;
        case 2: temp.Inserted_records = value; break;
        case 3: temp.Erased_records = value; break;
    }
    fseek(file, 0, SEEK_SET);
    fwrite(&temp, sizeof(THeader), 1, file);
    fclose(file);
}

void ReadDir(const char Filename[], int index, TBlock *buffer) {
    FILE *file = fopen(Filename, "rb");
    fseek(file, sizeof(THeader) + sizeof(TBlock) * index, SEEK_SET);
    fread(buffer, sizeof(TBlock), 1, file);
    fclose(file);
}

void WriteDir(const char Filename[], int index, TBlock *buffer) {
    FILE *file = fopen(Filename, "rb+");
    fseek(file, sizeof(THeader) + sizeof(TBlock) * index, SEEK_SET);
    fwrite(buffer, sizeof(TBlock), 1, file);
    fclose(file);
}

bool Read_info(TPatient *patient, int index) {
    printf("Enter the patient ID number %d (-1 to stop): ", index + 1);
    scanf("%d", &patient->patient_ID);
    if (patient->patient_ID == -1) return false;
    printf("Enter the name of the patient: ");
    scanf("%s", patient->Name);
    printf("Enter the age of the patient: ");
    scanf("%d", &patient->Age);
    patient->Delete = false;
    return true;
}

void initial_loading(const char Filename[], double factor) {
    FILE *file = fopen(Filename, "wb");
    THeader header ;
    fwrite(&header, sizeof(THeader), 1, file);
    fclose(file);

    TPatient temp_patient;
    TBlock buf ;
    int index = 0, buf_index = 0, block_index = 0 ;

    while (Read_info(&temp_patient, index)) {
        if (buf_index < factor * N) {
            buf.patients[buf_index++] = temp_patient;
            buf.length++;
        } else {
            WriteDir(Filename, block_index, &buf);
            block_index++ ;
            buf_index = 0;
            buf.length = 0;
            buf.patients[buf_index++] = temp_patient;
            buf.length++;
        }
        index++;
    }
    printf("\nblock index %d , buf length %d \n" , block_index , buf.length);
    if (buf.length > 0) WriteDir(Filename, block_index++, &buf);

    SetHeader(Filename, 1, block_index);
    SetHeader(Filename, 2, index);
    SetHeader(Filename, 3, 0);

}

void DisplayInfo(const char Filename[]) {
    THeader header;
    TBlock block;
    FILE *file = fopen(Filename, "rb");
    fread(&header, sizeof(THeader), 1, file);
    printf("Header Info:\nWritten Blocks: %d\nInserted Records: %d\nErased Records: %d\n\n",
           header.Written_blocks, header.Inserted_records, header.Erased_records);
    int block_index = 0;
    while (fread(&block, sizeof(TBlock), 1, file) == 1) {
        printf("Block %d: (Length: %d)\n", block_index++, block.length);
        for (int i = 0; i < block.length; i++) {
            TPatient patient = block.patients[i];
            printf("  Patient %d:\n    ID: %d\n    Name: %s\n    Age: %d\n    Delete: %s\n\n",
                   i, patient.patient_ID, patient.Name, patient.Age, patient.Delete ? "true" : "false");
        }
    }
    fclose(file);
}
bool search_patient_id(const char Filename[], int ID, TIndex *index) {
    int be = Header(Filename, 1) - 1, bs = 0, i ,j;
    bool found = false, stop = false;
    TBlock temp_block;

    while (bs <= be && !stop) {
        i = (bs + be) / 2;
        ReadDir(Filename, i, &temp_block);

        int inf = (temp_block.patients[0].patient_ID);
        int sup = (temp_block.patients[temp_block.length - 1].patient_ID);

        if (ID >= inf && ID <= sup) {
            int lower = 0, upper = temp_block.length - 1;

            while (lower <= upper && !found) {
                j = (lower + upper) / 2;
                int current_id = (temp_block.patients[j].patient_ID);

                if (current_id == ID) {
                    index->block_index = i;
                    index->patient_index = j;
                    found = true;
                } else if (current_id > ID) {
                    upper = j - 1;
                } else {
                    lower = j + 1;
                }
            }

            if (lower > upper) {
                index->block_index = i;
                index->patient_index = lower;
            }
            stop = true;
        } else if (ID < inf) {
            be = i - 1;
        } else {
            bs = i + 1;
        }
    }
    if (bs > be)
    {
        index->block_index = bs ;
        index->patient_index = 1 ;

    }
    return found ;
    
}
void logical_deletion (char Filename[] , int ID)
{
    TIndex temp_index ;
    TBlock temp_block ;
    if (search_patient_id(Filename,ID,&temp_index))
    {
        ReadDir(Filename,temp_index.block_index,&temp_block) ;
        temp_block.patients[temp_index.patient_index].Delete = true ;
        WriteDir(Filename,temp_index.block_index,&temp_block);
        SetHeader(Filename,3 ,Header(Filename,3) + 1) ;
    }
    
}
void Merge_File(char Filename1[], char Filename2[], double factor) {
    char Filename3[] = "TotalPatients.dat";
    SetHeader(Filename3, 1, 0);
    SetHeader(Filename3, 2, 0);
    SetHeader(Filename3, 3, 0);

    int j1 = 0, j2 = 0, j3 = 0;
    int i1 = 0, i2 = 0, i3 = 0;
    int BN1 = Header(Filename1, 1), BN2 = Header(Filename2, 1);

    struct TBlock temp_block1, temp_block2, temp_block3;
    struct TPatient temp_patient;

    temp_block3.length = 0;

    while (i1 < BN1 && i2 < BN2) {
        ReadDir(Filename1, i1, &temp_block1);
        ReadDir(Filename2, i2, &temp_block2);

        while (j1 < temp_block1.length && j2 < temp_block2.length) {
            if (temp_block1.patients[j1].patient_ID <= temp_block2.patients[j2].patient_ID) {
                temp_patient = temp_block1.patients[j1++];
            } else {
                temp_patient = temp_block2.patients[j2++];
            }

            if (j3 < factor * N) {
                temp_block3.patients[j3++] = temp_patient;
                temp_block3.length++;
            } else {
                WriteDir(Filename3, i3++, &temp_block3);
                temp_block3.patients[0] = temp_patient;
                temp_block3.length = 1;
                j3 = 1;
            }
        }

        if (j1 >= temp_block1.length) {
            i1++;
            j1 = 0;
        }
        if (j2 >= temp_block2.length) {
            i2++;
            j2 = 0;
        }
    }

    bool inFirstFile = i1 < BN1;
    int i = inFirstFile ? i1 : i2;
    int BN = inFirstFile ? BN1 : BN2;
    int j = inFirstFile ? j1 : j2;
    TBlock temp_block ;

    while (i < BN) {
        ReadDir(inFirstFile ? Filename1 : Filename2, i, &temp_block);

        while (j < temp_block.length) {
            temp_patient = temp_block.patients[j++];

            if (j3 < factor * N) {
                temp_block3.patients[j3++] = temp_patient;
                temp_block3.length++;
            } else {
                WriteDir(Filename3, i3++, &temp_block3);
                temp_block3.patients[0] = temp_patient;
                temp_block3.length = 1;
                j3 = 1;
            }
        }

        i++;
        j = 0;
    }

    if (temp_block3.length > 0) {
        WriteDir(Filename3, i3++, &temp_block3);
    }

    SetHeader(Filename3, 1, i3);
    SetHeader(Filename3, 2, Header(Filename3, 2) + Header(Filename1, 2) + Header(Filename2, 2));
}

int main() {
    char filename[] = "patients.dat";
    double factor = 0.3;
    initial_loading(filename, factor);
    printf("Displaying Patient Information:\n");
    DisplayInfo(filename);
    return 0;
}
