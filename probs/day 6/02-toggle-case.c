#include <stdio.h>
#include <ctype.h>
char* toggleCase(char* text) {
    for(int I=0; text[I] != '\0'; I++){
        if(islower(text[I])) { text[I]=toupper(text[I]); } 
        else if(isupper(text[I])) { text[I]=tolower(text[I]); } 
    }
    return text;
}

int main()
{
    char text[1024];    
    scanf("%s",text);
    printf("%s",toggleCase(text));
    return 0;
}
