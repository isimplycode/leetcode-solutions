class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> m;
        for (int i=0; i<size(s); ++i) {
            if (m.find(s[i])!=m.end()) {
                m[s[i]]++;
            } else {
                m[s[i]]=1;
            }
        }
        int res=0,oddmax=0;
        for (auto i : m) {
            if (!(i.second%2)) {
                res+=i.second;
            } else {
                oddmax=max(oddmax,i.second);
                res+=i.second-1;
            }
        }
        if (oddmax!=0) return res+1;
        else return res;
    }
};
