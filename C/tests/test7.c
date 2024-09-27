#include <stdio.h>

int main() {
  int myNumbers[4] = {25, 50, 75, 100};
  int i;
	printf("%p\n", myNumbers);
  for (i = 0; i < 4; i++) {
    printf("%p\n", &myNumbers[i]);
  }

  return 0;
}