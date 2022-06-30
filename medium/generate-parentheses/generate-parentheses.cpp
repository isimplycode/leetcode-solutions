class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        vector<string> par;
        for (int i=0; i<n; ++i) {
            par.push_back("(");
        }
        int count=0;
        for (int i=0; i<n; ++i) {
            par.push_back(")");
        }
        do {
            string s;
            stack<char> st;
            for (int i=0; i<par.size(); ++i) {
                s+=par[i];
            }
            bool isval=true;
            for (int i=0; i<s.size(); ++i) {
                if (s[i]==')') {
                    if (st.size()!=0) {
                        if (st.top()!='(') {
                            isval=false;
                        } else {
                            st.pop();
                        }
                    } else {
                        isval=false;
                    }
                } else {
                    st.push('(');
                }
            }
            if (st.size()!=0) isval=false;
            if (isval)
                res.push_back(s);
        } while(next_permutation(begin(par),end(par)));
        return res;
    }
};
