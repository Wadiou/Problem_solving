#include <stdio.h>
#include <string.h>
int main() {
  char filename[] = "example.txt";  
  char content[1000];
  FILE *file = fopen(filename,"w");
  printf("Enter EOF to terminate :\n");
  while (true)
  {

    fgets(content,sizeof(content),stdin);
    if (strcmp(content,"EOF\n") == 0)
    {
      break;
    }
    fprintf(file,"%s" , content);

  }
  fclose(file);
  return 0;
}