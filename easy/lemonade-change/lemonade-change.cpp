class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0;
        if (bills[0]!=5) return false;
        for (int i=0; i<size(bills); ++i) {
            if (bills[i]==10) {
                if (a<=0) return false;
                a--;
                b++;
            } else if (bills[i]==20) {
                if (a>0&&b>0) {
                    b--;
                    a--;
                } else if (a>2) {
                    a-=3;
                } else {
                    return false;
                }
            } else {
                a++;
            }
        }
        return true;
    }
};
