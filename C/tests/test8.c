#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    printf("Enter the size of the array : ");
    scanf("%d",&N);
    int *arr = (int*) calloc(N,sizeof(int));
    for (int i = 0; i < N; i++)
    {
        arr[i]= i*i;
    }
    arr = realloc(arr,2*N);
    for (int i = N-1; i < 2*N; i++)
    {
        arr[i]= i*i;
    }
    for (int i = 0; i < 2*N; i++)
    {
        printf("%d\n" , arr[i]);
    }
    free(arr);
    return 0;
  
}