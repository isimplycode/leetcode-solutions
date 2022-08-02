class Solution {
public:
    int subtractProductAndSum(int n) {
        int res=n,sum=0,prod=1;
        string num=to_string(n);
        for (int i=0; i<size(num); ++i) {
            sum+=(num[i]-'0');
            prod*=(num[i]-'0');
        }
        return prod-sum;
    }
};
