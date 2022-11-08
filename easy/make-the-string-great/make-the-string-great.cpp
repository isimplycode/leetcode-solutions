class Solution {
public:
    string t="";
    bool isVal(string s) {
        for (int i=1; i<size(s); ++i) {
            if (abs((int)s[i]-(int)s[i-1])==32) {
                s.erase(i-1,2);
                t=s;
                return false;
            }
        }
        return true;
    }
    string makeGood(string s) {
        t=s;
        while (!isVal(s)) {
            s=t;
        }
        return t;
    }
};
