//leetcode 
class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        if(q1.empty()){
            return -1;
        }

        while(q1.size() > 1){
            q2.push(q1.front()); q1.pop();
        }

        int peek_data = q1.front(); q1.pop();
        //swap q1 and q2 
        queue<int> t = q1;
        q1 = q2;
        q2 = t; 
        return peek_data;
    }
    
    int top() {
        if(q1.empty()){
            return -1;
        }

        while(q1.size() > 1){
            q2.push(q1.front()); q1.pop();
        }

        int peek_data = q1.front(); 
        q2.push(peek_data); q1.pop();
        //swap q1 and q2 
        queue<int> t = q1;
        q1 = q2;
        q2 = t; 
        return peek_data;
    }
    
    bool empty() {
        return q1.empty();
    }
};