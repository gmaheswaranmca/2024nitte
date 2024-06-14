#include <stdio.h>
#include <string.h>

int main()
{
    char name[255] = "Sannidhi is coming from Karkala, she takes college bus & reaches college.";
    char separator[20] = " ,&.";//space, comma, and symbol, dot
    char* word = strtok(name,separator);
    while(word != NULL) { 
        printf("%s\n",word); // each word
        word = strtok(NULL,separator);//next next token/word
    }
    
    return 0;
}
