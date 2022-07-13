class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> ss;
        for (int i=0; i<size(s); ++i) {
            if (s[i]=='#') {
                if (ss.size()) {
                    ss.pop();
                }
            } else
                ss.push(s[i]);
        }
        int lst=0;
        for (int i=size(t)-1; i>=0; --i) {
            if (t[i]=='#') {
                lst++;
            } else {
                if (!lst) {
                    if (!size(ss))
                        return false;
                    if (ss.top()!=t[i])
                        return false;
                    else ss.pop();
                } else {
                    lst--;
                }
            }
        }
        return !ss.size();
    }
};
