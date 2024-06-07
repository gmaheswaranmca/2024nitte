/*
Write a program to find the sum of digits of a number until the sum becomes a single digit.

Input Format

Input format consists of a number

Constraints

NA

Output Format

Output format consists of an integer

Sample Input 0

78945623
Sample Output 0

8
Sample Input 1

45678
Sample Output 1

3


 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int sod(long long int num){
    int S = 0;
    while(num > 0){
        S += num % 10;
        num = num / 10;
    }
    return S;
}
int main() {
    long long int N;
    scanf("%lld",&N);
    long long int sum = sod(N);
    if(sum > 9){
        sum = sod(sum);
    }
    printf("%lld",sum);
    return 0;
}
