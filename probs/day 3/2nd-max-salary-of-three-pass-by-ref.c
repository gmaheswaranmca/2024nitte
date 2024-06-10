// pass by value 

#include<stdio.h>
double findSecondMaxSalary(double* rfirst, double* rsecond, double* rthird) {
    double second_max = 0.0;
    double max = ((*rfirst) > (*rsecond) && (*rfirst) > (*rthird)) ? 
                        (*rfirst) : 
                        ((*rsecond) > (*rthird) ? (*rsecond) : (*rthird));
    double min = ((*rfirst) < (*rsecond) && (*rfirst) < (*rthird)) ? 
                        (*rfirst) : 
                        ((*rsecond) < (*rthird) ? (*rsecond) : (*rthird));
    second_max = ((*rfirst) + (*rsecond) + (*rthird)) - max - min; 
    return second_max;
}
int main() {
    double a = 10.0,b=20.0,c=30.0;
    printf("%.2f",findSecondMaxSalary(&a,&b,&c));
    return 0;
}