#include <stdio.h>
#include <string.h>
int main() {
    char filename1[] = "f1.txt",
    filename2[] = "f2.txt" ,
    filename3[] = "f3.txt" ,
    content[1000] ;  
    FILE *file1 = fopen(filename1,"r") ,
    *file2 = fopen(filename2,"r") ,
    *file3 = fopen(filename3,"w");

    while (fgets(content,sizeof(content), file1) != nullptr)
    {
        fputs(content,file3);
    }

    while (fgets(content,sizeof(content), file2) != nullptr)
    {
        fputs(content,file3);
    }
    
    fcloseall();

    
    return 0;
}
