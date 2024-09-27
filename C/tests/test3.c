#include <stdio.h>

int main() {
  char carName[] = "Volvo";
  int arr[] = {3,4,5,6,7,6};
  int length = sizeof(carName) / sizeof(carName[0]);
  int i;
  printf("\\0 in ascii is %d %d\n" , carName[7] , arr[7]);
  for (i = 0; i < length; ++i) {
    printf("%c\n", carName[i]);
  }

  return 0;
}