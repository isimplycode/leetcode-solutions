class MinStack {
public:
    stack<int> st;
    stack<int> mins;
    int min=INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (val<min) {
            min=val;
        }
        mins.push(min);
    }
    
    void pop() {
        st.pop();
        mins.pop();
        if (size(mins))
            min=mins.top();
        else
            min=INT_MAX;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mins.top();
    }
};
