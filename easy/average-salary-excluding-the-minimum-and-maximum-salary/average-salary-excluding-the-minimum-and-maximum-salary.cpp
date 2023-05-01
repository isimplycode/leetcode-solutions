class Solution {
public:
    double average(vector<int>& salary) {
        double res;
        int mx=INT_MIN,mn=INT_MAX,total=0;
        for (int i=0; i<size(salary); ++i) {
            mx=max(salary[i],mx);
            mn=min(salary[i],mn);
            total+=salary[i];
        }
        total-=mx;
        total-=mn;
        res=(double)total/(size(salary)-2);
        return res;
    }
};
