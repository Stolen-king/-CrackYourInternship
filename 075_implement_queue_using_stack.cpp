class MyQueue {
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s.empty()){
            front=x;
        }
        s.push(x);
    }
    
    int pop() {

        if(s.empty()){
            cerr << "Can't access an empty queue!\n";
            exit(1);
        }
        else{
            int e = front;
            stack<int> temp;
            while(s.size() > 1){
                temp.push(s.top());
                s.pop();
            }
            
            if(!temp.empty())
                front = temp.top();
            s = stack<int>();
            while(!temp.empty()){
                s.push(temp.top());
                temp.pop();
            }
            
            return e;
        }
    }
    
    int peek() {
        if(!s.empty()){
            return front;
        }
        else{
            cout<<"Can't access an empty queue!\n";
            exit(1);
        }
    }
    
    bool empty() {
        return s.empty();
        
    }
private:
    stack<int>s;
    int front;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */