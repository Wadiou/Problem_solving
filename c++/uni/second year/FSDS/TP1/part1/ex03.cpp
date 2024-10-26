#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct City {
    char* name;  
    double population;
};

void sorting(City* cities, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (cities[j].population > cities[j + 1].population) {
                City temp = cities[j+1];
                cities[j+1] = cities[j];
                cities[j] = temp;
            }
        }
    }
}

int main() {
    int size , max_size;
    printf("Enter the size of the array and the max size of strings: ");
    scanf("%d %d", &size ,&max_size);
    City* cities = (City*)malloc(size * sizeof(City));

    for (int i = 0; i < size; i++) {
        cities[i].name = new char[max_size];  
        printf("Enter the name and the population of city number %d: ", i + 1);
        scanf("%s %lf", cities[i].name, &cities[i].population);
    }

    sorting(cities, size);

    printf("\nAcending order of population:\n");
    for (int i = 0; i < size; i++) {
        printf("City: %s, Population: %.2lf million(s)\n", cities[i].name, cities[i].population);
    }

    for (int i = 0; i < size; i++) {
        delete[] cities[i].name;  
    }
    free(cities);  

    return 0;
}
