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

/*
n! = n * (n-1) | n==1 -> 1


f(n)
	if(n == 1) {
		return 1;
	}
	return n * f(n-1);
	
__ main __
print f(5) 




stack 
f(n=1) | <-1
f(n=2) | 2 * 1 | 2 
f(n=3) | 3 * 2 | 6 
f(n=4) | 4 * 6 | 24
f(n=5) | 5 * 24 | 120
main->print 120

*/
