#include <cstdio>
#include <queue>
using namespace std;

int main() //10 20 30 pop pop pop 
{
    queue<int> q1;
    q1.push(10); q1.push(20); q1.push(30);
    printf("%d ",q1.front()); q1.pop();
    printf("%d ",q1.front()); q1.pop();
    printf("%d ",q1.front()); q1.pop();
    printf("\nis empty:%d ", q1.empty());

    return 0;
}
