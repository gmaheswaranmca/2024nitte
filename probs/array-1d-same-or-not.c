/*
The Modern World Cinderella was happy to meet Prince Charming at the ballroom and she danced with him happily. While she was dancing, Prince wanted to check whether Cinderella is a perfect match for him. He asked her a question to check her knowledge of Arrays. Can you help Cinderella to write a program to find whether the two arrays are the same or not?

Note: Two arrays are said to be the same if the sum of both arrays is the same and the size of the arrays is the same.

Input Format

Input consists of 2 integers and 2 arrays. The integers should correspond to the size of the arrays.

Constraints

NA

Output Format

If two arrays are the same, display "Same" else display "Not Same"

Sample Input 0

4
4
1
2
3
4
1
2
3
4
Sample Output 0

Same
Explanation 0

Here, the sum and size of both arrays are the same. Hence it prints "Same".

Sample Input 1

3
3
1
2
1
2
3
6
Sample Output 1

Not Same
Explanation 1

Here, the sum and size of both arrays are not the same. Hence it prints "Not Same".

 */

 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 10000
void readNumbers(int* numbers, int size){
    for(int I = 0; I < size; I++){
        scanf("%d",&numbers[I]);
    }
}
int findSum(int* numbers, int size){
    int S = 0;
    for(int I = 0; I < size; I++){
        S += numbers[I];
    }
    return S;
}
int main() {
    int sizeOne, sizeTwo;
    int firstNumbers[MAX_SIZE],secondNumbers[MAX_SIZE];
    scanf("%d%d",&sizeOne,&sizeTwo);
    if(sizeOne != sizeTwo){
        printf("Not Same");
        return 0;
    }
    readNumbers(firstNumbers, sizeOne);
    readNumbers(secondNumbers, sizeTwo);
    int firstSum = findSum(firstNumbers, sizeOne);
    int secondSum = findSum(secondNumbers, sizeTwo);
    if(firstSum == secondSum){
        printf("Same");
    }else {
        printf("Not Same");
    }
    return 0;
}
