class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        for (int i=0; i<size(s); ++i) {
            if (st.size()) {
                if (s[i]==st.top()) {
                    st.pop();
                } else {
                    st.push(s[i]);
                }
            } else {
                st.push(s[i]);
            }
        }
        string temp="",res="";
        while (st.size()) {
            temp+=st.top();
            st.pop();
        }
        for (int i=size(temp)-1; i>=0; --i) {
            res+=temp[i];
        }
        return res;
    }
};
