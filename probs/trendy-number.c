/*

Joey Tribbiani wanted to buy a meatball Sandwich and went to the nearby sandwich shop. There was a poster that said if anyone comes up with a program for Trendy Number they can get free Sandwiches for a lifetime as a gift. Can you help Joey to write a program to check whether the given number is a trendy number or not?

A number is said to be a trendy number if it has 3 digits and the middle digit is divisible by 3.

Input Format

The input is an integer 'n' which denotes the given number.

Constraints

NA

Output Format

If the given number is a trendy number, then print "Trendy Number". Otherwise, print "Not a Trendy Number". If the given number is not a 3 digit number, then print "Invalid Number"

Sample Input 0

791
Sample Output 0

Trendy Number
Explanation 0

Here, 791 is a three-digit number, as well as the middle digit(9), which is divisible by 3. Hence the output is a "Trendy Number".

Sample Input 1

275
Sample Output 1

Not a Trendy Number
Explanation 1

Here, 275 is a three-digit number, but the middle digit(7), is not divisible by 3. Hence the output is "Not a Trendy Number".



 */

 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num;
    scanf("%d",&num);
    if(!(100 <= num && num <= 999)) {
        printf("Invalid Number");
        return 0;
    }
    
    if(((num/10)%10) % 3 == 0) { //791/10-> 79 %10 -> 9 %3 == 0
        printf("Trendy Number");
    }else{
        printf("Not a Trendy Number");
    }
     
    return 0;
}