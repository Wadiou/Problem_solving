#include <stdio.h>
int occurence(char sentence[1000] , char word[100]){
    int i = 0 , j = 0 , counter = 0 ;
    for (; sentence[i] != '\0'; i++)
    {
        if (sentence[i] != word[j])
        {
            continue;
        }
        j++;
        if (word[j] == '\0')
        {
            counter ++;
            j = 0;
        }
    }
    return counter ;
    
}
int main() {
    char filename[] = "example.txt" , word[100] ,sentence[1000] ;  
    FILE *file = fopen(filename,"r") ;
    printf("Enter a word : ");
    scanf("%s",word);
    int total = 0 ;
    while (fgets(sentence,sizeof(sentence),file) != nullptr)
    {
        total += occurence(sentence,word);
    }

    printf("the number of occurence is : %d\n" , total);
       
    return 0;
}
