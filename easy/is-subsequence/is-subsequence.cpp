class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (size(s)>size(t)) {
            return false;
        }
        queue<char> q;
        for (auto i : s) {
            q.push(i);
        }
        for (auto i : t) {
            if (i==q.front()) {
                q.pop();
            }
        }
        return q.size()==0 ? true:false;
    }
};
