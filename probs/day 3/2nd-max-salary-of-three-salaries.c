// pass by value 

#include<stdio.h>
double findSecondMaxSalary(double first, double second, double third) {
    double second_max = 0.0;
    double max = (first > second && first > third) ? first : 
                        (second > third ? second : third);
    double min = (first < second && first < third) ? first : 
                        (second < third ? second : third);
    second_max = (first + second + third) - max - min; 
    return second_max;
}

int main() {
    printf("%.2f",findSecondMaxSalary(10.0,20.0,30.0));
    return 0;
}