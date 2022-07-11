class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for (int i=0,f,s; i<size(tokens); ++i) {
            if (tokens[i]=="+") {
                s=stoi(st.top());
                st.pop();
                f=stoi(st.top());
                st.pop();
                st.push(to_string(f+s));
            } else if (tokens[i]=="-") {
                s=stoi(st.top());
                st.pop();
                f=stoi(st.top());
                st.pop();
                st.push(to_string(f-s));
            } else if (tokens[i]=="*") {
                s=stoi(st.top());
                st.pop();
                f=stoi(st.top());
                st.pop();
                st.push(to_string(f*s));
            } else if (tokens[i]=="/") {
                s=stoi(st.top());
                st.pop();
                f=stoi(st.top());
                st.pop();
                st.push(to_string(f/s));
            } else 
                st.push(tokens[i]);
        }
        return stoi(st.top());
    }
};
