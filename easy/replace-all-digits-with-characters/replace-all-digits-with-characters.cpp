class Solution {
public:
    string replaceDigits(string s) {
        vector<int> x = {1,2,3,4,5,6,7,8,9,0};
        string res = "";
        for (int i=0;i<s.size();++i){   
            if (find(begin(x),end(x),(int)s[i]-48) != end(x)) {
                res += char(s[i-1] + (int(s[i])-48));
            } else {
                res += s[i];
            }
        }
        return res;
    }
};
