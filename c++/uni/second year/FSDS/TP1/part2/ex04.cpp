#include <stdio.h>

int main() {
    char filename[] = "example.txt" ,C ;  
    FILE *file = fopen(filename,"r") ;
    int counter = 0 ;
    while ((C = fgetc(file)) != EOF)
    {
        counter = C == '\n' ?  counter+ 1 : counter ;
    }

    printf("The number of lines is %d\n" , counter);
    
    return 0;
}
