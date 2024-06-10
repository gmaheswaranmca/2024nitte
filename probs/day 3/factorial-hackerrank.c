#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int f(int n) {
    if(n == 1) {
        return 1;
    }
    return n * f(n-1);
}

int main() {
    int num;
    scanf("%d",&num);
    printf("The factorial of %d is %d",num,f(num));
    return 0;
}
