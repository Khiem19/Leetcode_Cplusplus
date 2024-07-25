class MyQueue {
public:
    stack<int> push_s, pop_s;
    MyQueue() {

    }
    
    void push(int x) {
        push_s.push(x);
    }
    
    int pop() {
        while (push_s.size() != 0) {
            pop_s.push(push_s.top());
            push_s.pop();
        }
        int x = pop_s.top();
        pop_s.pop();

        while (pop_s.size()!= 0) {
            push_s.push(pop_s.top());
            pop_s.pop();
        }

        return x;
    }
    
    int peek() {
        while (push_s.size() != 0) {
            pop_s.push(push_s.top());
            push_s.pop();
        }
        int x = pop_s.top();

        while (pop_s.size()!= 0) {
            push_s.push(pop_s.top());
            pop_s.pop();
        }

        return x;
    }
    
    bool empty() {
        return push_s.empty() && pop_s.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */