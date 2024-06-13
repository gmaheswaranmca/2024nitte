#include <stdio.h>
#include <ctype.h>

int main()
{
    char text[1024];    
    scanf("%s",text);
    
    int countDigit=0, countAlpha=0, 
        countAlNum=0, countLower=0, countUpper=0;
    
    for(int I=0; text[I] != '\0'; I++){
        if(isdigit(text[I])) {
            countDigit++;
        }
        if(isalpha(text[I])) {
            countAlpha++;
        }
        if(isalnum(text[I])) {
            countAlNum++;
        }
        if(islower(text[I])) {
            countLower++;
        }
        if(isupper(text[I])) {
            countUpper++;
        }
    }

    printf("Number of digits:%d\n",countDigit);
    printf("Number of alphabets:%d\n",countAlpha);
    printf("Number of alpha numberics:%d\n",countAlNum);
    printf("Number of uppercases:%d\n",countUpper);
    printf("Number of lowercases:%d\n",countLower);

    return 0;
}
