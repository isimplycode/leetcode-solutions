class Solution {
public:
    bool isPowerOfFour(int n) {
        string temp="";
        while (n>0) {
            if (n%2==1) {
                temp+='1';
            } else temp+='0';
            n/=2;
        }
        int onecount=0;
        int onepos=-1;
        for (int i=size(temp)-1; i>=0; --i) {
            if (temp[i]=='1') {
                onecount++;
                onepos=i+1;
            }
        }
        if (onecount!=1) return false;
        if (onepos%2==1) return true;
        return false;
    }
};
