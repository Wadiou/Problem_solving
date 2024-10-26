#include <stdio.h>
#include <stdlib.h>


void check_size(double *&Height_arr, int *size, int i) {
    if (i >= *size) {
        *size *= 2;
        Height_arr = (double *)realloc(Height_arr, *size * sizeof(double));
    }
}

int main() {
    double Height;
    double Weight;
    int size = 5, max_size = 0;
    double *Height_arr = (double*) malloc(size * sizeof(double)) , input = 1;


    for (int i = 0; input > 0; i++) {
        printf("Enter the Height of patient number %d: ", i + 1);
        scanf("%lf", &input);
        if (input < 0) {
            break;
        }
        check_size(Height_arr, &size, i);
        Height_arr[i] = input;
        max_size++; 
    }

    double *Weight_arr = (double*) malloc(max_size * sizeof(double));
   

    for (int i = 0; i < max_size; i++) {
        printf("Enter the Weight of patient number %d: ", i + 1);
        scanf("%lf", &input);
        Weight_arr[i] = input;
    }

    double Height_average = 0, Weight_average = 0;
    for (int i = 0; i < max_size; i++) {
        Height_average += Height_arr[i];
        Weight_average += Weight_arr[i];
    }
    Height_average /= max_size;
    Weight_average /= max_size;

    printf("The average height is %.2lf meters\n", Height_average);
    printf("The average weight is %.2lf kilograms\n", Weight_average);

    for (int i = 0; i < max_size; i++) {
        double BMI = Weight_arr[i] / (Height_arr[i] * Height_arr[i]);
        printf("Patient %d: BMI = %.2lf ", i + 1, BMI);
        if (BMI < 18.5) {
            printf("Underweight\n");
        } else if (BMI > 25) {
            printf("Overweight\n");
        } else {
            printf("Normal weight\n");
        }
    }

    free(Height_arr);
    free(Weight_arr);

    return 0;
}
