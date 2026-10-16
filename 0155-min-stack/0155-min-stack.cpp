class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack() {
        
    }
    
    void push(long long value) {
        if(st.empty()){
            st.push(value);
            min = value;
        }
        else if(value < min){
            st.push(value + (value - min));
            min = value;
        }
        else st.push(value);
    }
    
    void pop() {
        if(st.top() < min){
            long long oldmin = min + (min - st.top());
            min = oldmin;
        }
        st.pop();
    }
    
    int top() {
        if(st.top() < min) return min;
        else return st.top();
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna