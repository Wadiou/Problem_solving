#include <iostream>

using namespace std;

void writeFile() {
    FILE* file = fopen("example.txt", "w");
    if (file != NULL) {
        int num = 42;
        float pi = 3.14;
        char ch = 'A';
        const char* str = "Hello";
        const char* str1 = "world";

        fprintf(file, " %d %f %c %s %s", num, pi, ch, str, str1);

        fclose(file);
    } else {
        perror("Error opening file");
    }
}

void readFile() {
    FILE* file = fopen("example.txt", "r");
    if (file != NULL) {
        int num;
        float pi;
        char ch;
        char str1[50];
        char str2[50];

        fscanf(file, " %d %f %c %s %s", &num , &pi,&ch,str1,str2);
        

        cout << "Read from file:" << endl;
        cout << "Integer: " << num << endl;
        cout << "Float: " << pi << endl;
        cout << "Character: " << ch << endl;
        cout << "String1: " << str1 << endl;
        cout << "String2: " << str2 << endl;

        fclose(file);
    } else {
        perror("Error opening file");
    }
}

int main() {
    writeFile();
    readFile();
    return 0;
}

/*int main() {
    FILE *file = fopen("example.txt", "r");
    if (file != NULL) {
        int num;
        float pi;
        char ch;
        char str[50] ,str1[50];

        fscanf(file, "Integer: %d\n", &num);
        fscanf(file, "Float: %f\n", &pi);
        fscanf(file, "Character: %c\n", &ch);
        fscanf(file, "String: %s\n", str);
        fscanf(file, "String: %s\n", str1);

        printf("Read from file:\n");
        printf("Integer: %d\n", num);
        printf("Float: %f\n", pi);
        printf("Character: %c\n", ch);
        printf("String: %s\n", str);
        printf("String: %s\n", str1);
        fclose(file);
    } else {
        perror("Error opening file");
    }
    return 0;
}*/