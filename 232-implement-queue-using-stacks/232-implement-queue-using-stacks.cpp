class MyQueue {
public:
    stack<int>input,output;
    MyQueue() {
    //in 1st approach s2 was output
    }
    
    void push(int x) {
        //stack<int>s1,s2;
        
        input.push(x);
        
    }
    
    int pop() {
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            
        }
        int x=output.top();
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
        return output.top();
    }
    
    bool empty() {

        if(output.empty() && input.empty()){
            return true;
        }
        else{
            cout<<"false";
            return false;
        }
        return true;
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