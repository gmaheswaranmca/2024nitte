#include <stdio.h>
#include <string.h>

int main()
{
    union Emp{
        int num;             
        char name[255];     
        float salary;       
        char job_title[50]; 
    };                       
    
    union Emp deekshith;
    deekshith.num = 403;
    strcpy(deekshith.name,"Deekshith");
    deekshith.salary = 60000.0f;
    strcpy(deekshith.job_title,"architect");
    
    printf("%d %s %.2f %s",deekshith.num,
            deekshith.name, 
            deekshith.salary,
            deekshith.job_title);    
    return 0;
}
