#include <stdio.h>
#include <string.h>
int main() {
  char filename[] = "example.txt";  
  char content[1000];
  
  FILE* file = fopen(filename,"r");
  printf("the content of the file :\n");
  while (fgets(content,sizeof(content), file) != nullptr)
  {
    printf("%s", content);
  }
  
  return 0;
}
