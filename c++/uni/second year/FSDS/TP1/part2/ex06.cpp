#include <stdio.h>
#include <string.h>
#define N 1000
void remove_newline(char str1[])
{
    for (int i = 0;str1[i] != 0; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = 0 ;
            break;
        }
        
    }
    
}
int main() {
    char filename1[] = "f1.txt" , filename2[] = "f2.txt" , *temp1 , *temp2 , str1[N] , str2[N];  
    FILE *file1 = fopen(filename1,"r") ,*file2 = fopen(filename2,"r")  ;
    int counter = 0 ;
    
    for (int i = 0;true; i++)
    {
        temp1 = fgets(str1,sizeof(str1),file1);   
        temp2 = fgets(str2,sizeof(str2),file2);

        if (temp1 == nullptr && temp2 == nullptr)
        {
            break;
        }
        remove_newline(str1);
        remove_newline(str2);
        str1[0] = temp1 == nullptr ? 0 : str1[0] ;
        str2[0] = temp2 == nullptr ? 0 : str2[0] ;
        if (strcmp(str1 , str2) != 0)
        {
            if (counter == 0)
            {
                printf("Differences in the two files :\n\n");
            }
            
            printf("Line number %d :\nFile1 : %s\nFile2 : %s\n\n" , i + 1 , str1 , str2);
            counter++ ; 
        }
        
    }
    if (counter == 0)
    {
        printf("The two files are identical!\n");
    }
    
    fcloseall();
    
    return 0;
}
