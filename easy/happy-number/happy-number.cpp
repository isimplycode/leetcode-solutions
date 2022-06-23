class Solution {
public:
    bool isHappy(int n) {
        int num=n;
        while (num>5) {
            string s=to_string(num);
            num=0;
            for (int i=0; i<size(s); ++i) {
                num+=int(s[i]-'0')*int(s[i]-'0');
            }
        }
        return num==1;
    }
};
