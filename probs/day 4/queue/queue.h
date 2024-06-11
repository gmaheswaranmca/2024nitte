#define MAX_SIZE 5
#define E_T_DEFAULT 0.0f
typedef float E_t; 
typedef int BOOL; 

struct _queue_t {
    E_t items[MAX_SIZE];
    int front_index;
    int back_index;
};
typedef struct _queue_t queue_t;

BOOL empty(queue_t *rqueue);
BOOL full(queue_t *rqueue);
int size(queue_t *rqueue);
E_t front(queue_t *rqueue);

void push_back(queue_t *rqueue, 
        E_t item);
void pop_front(queue_t *rqueue);

