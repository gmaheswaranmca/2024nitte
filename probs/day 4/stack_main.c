#include<stdio.h>
#include"stack.h"
int main () {
    stack_t salary_stack = {-1,{}};
    push(&salary_stack, 2000.0f);
    push(&salary_stack, 3000.0f);
    push(&salary_stack, 5000.0f);
    push(&salary_stack, 3500.0f);
    push(&salary_stack, 2500.0f);
    push(&salary_stack, 1500.0f);//!!!

    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);
    printf("%.2f ", top(&salary_stack)); pop(&salary_stack);//!!!

    stack_t price_stack = {-1,{}};
    push(&price_stack, 20.0f);
    push(&price_stack, 35.0f);
    push(&price_stack, 40.0f);
    push(&price_stack, 15.0f);
    push(&price_stack, 30.0f);
    push(&price_stack, 75.0f);//!!!

    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);
    printf("%.2f ", top(&price_stack)); pop(&price_stack);//!!!

    
    return 0;
}