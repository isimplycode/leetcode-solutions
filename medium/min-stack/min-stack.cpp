class MinStack {
public:
    stack<int> st;
    multiset<int, greater<int>> s;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        s.insert(val);
    }
    
    void pop() {
        int val=st.top();
        st.pop();
        auto it=s.find(val);
        s.erase(it);
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        auto it=end(s);
        it--;
        return *it;
    }
};
