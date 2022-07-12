class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[size(cost)];
        dp[0]=cost[0];
        dp[1]=cost[1];
        for (int i=2; i<size(cost); ++i) {
            dp[i]=min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[size(cost)-1],dp[size(cost)-2]);
    }
};
