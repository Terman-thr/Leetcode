class MyQueue {
public:
    stack<int> a;
    stack<int> b;
    /** Initialize your data structure here. */
    MyQueue() {}

    /** Push element x to the back of queue. */
    void push(int x) {
        a.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        while(!a.empty()){
            b.push(a.top());
            a.pop();
        }
        int result=b.top();
        b.pop();
        while(!b.empty()){
            a.push(b.top());
            b.pop();
        }
        return result;
    }

    /** Get the front element. */
    int peek() {
        while(!a.empty()){
            b.push(a.top());
            a.pop();
        }
        int result=b.top();
        while(!b.empty()){
            a.push(b.top());
            b.pop();
        }
        return result;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return a.empty();
    }
};