#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num < 0){
        num = -num;
    }
    int first = num / 1000;
    int last = num % 10;
    int sum = first + last;
    printf("%d",sum);
    return 0;
}