#include <stdio.h>
#include <ctype.h>
char* toggleCase(char* text) {
    for(int I=0; text[I] != '\0'; I++){
        if('a' <= text[I] && text[I] <= 'z') { 
            text[I]=text[I]-32; } 
        else if('A' <= text[I] && text[I] <= 'Z') { 
            text[I]=text[I]+32; } 
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
