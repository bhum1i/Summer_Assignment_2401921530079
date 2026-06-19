class MyQueue {
public:
    stack<int> input,output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        if(output.empty()){
            return -1;
        }
        int x = output.top();
        output.pop();
        return x;
    }
    
    int peek() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
        if(output.empty()){
            return -1;
        }
        int x = output.top();
        return x;
    }
    
    bool empty() {
        return input.empty()&&output.empty();
    }
};