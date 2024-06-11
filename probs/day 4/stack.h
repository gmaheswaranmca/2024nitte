#define MAX_SIZE 5
#define E_T_DEFAULT 0.0f
typedef float E_t; 
typedef int BOOL; 

struct _stack_t {
    int top_index;
    E_t items[MAX_SIZE];
};
typedef struct _stack_t stack_t;

BOOL empty(stack_t *rstack);
E_t top(stack_t *rstack);
BOOL full(stack_t *rstack);
int size(stack_t *rstack);
void push(stack_t *rstack, E_t item);
void pop(stack_t *rstack);