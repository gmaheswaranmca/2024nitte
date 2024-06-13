#include <stdio.h>
#include <string.h>

int main()
{
    //#1 
    enum BOOL {TRUE,FALSE};//0->TRUE,1->FALSE
    // ...    
    enum BOOL isNumber = TRUE;
    printf("%d\n",isNumber);
    
    isNumber = FALSE;
    printf("%d\n",isNumber);
    //...
    enum PEOPLE_TYPE {STUD=10,FACULTY=20,GUEST=30};
    
    enum PEOPLE_TYPE krishna_category = STUD;
    enum PEOPLE_TYPE mahesh_category = GUEST;
    
    printf("%d %d",krishna_category,mahesh_category);




    return 0;
}
/*
    enumeration type is to defined named constants with assigned index number
    to replace macro names 

    it offers the better programming for the programmers 
 */