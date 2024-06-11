#include<stdio.h>
#include"queue.h"
int main() {
    queue_t salary_queue = {{},-1,-1};
    push_back(&salary_queue,2000.0f);
    push_back(&salary_queue,3000.0f);
    push_back(&salary_queue,4000.0f);
    push_back(&salary_queue,3500.0f);
    push_back(&salary_queue,4500.0f);
    push_back(&salary_queue,2500.0f);//!!!

    printf("%.2f ", front(&salary_queue)); 
    pop_front(&salary_queue);

    printf("%.2f ", front(&salary_queue)); 
    pop_front(&salary_queue);

    printf("%.2f ", front(&salary_queue)); 
    pop_front(&salary_queue);

    printf("%.2f ", front(&salary_queue)); 
    pop_front(&salary_queue);

    printf("%.2f ", front(&salary_queue)); 
    pop_front(&salary_queue);

    printf("%.2f ", front(&salary_queue)); 
    pop_front(&salary_queue);//!!!

    return 0;
}