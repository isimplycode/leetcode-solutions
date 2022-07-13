class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1][1];
        dp[0][0]=0;
        for (int i=1; i<=amount; ++i) {
            dp[i][0]=-1;
        }
        for (int i=1; i<=amount; ++i) {
            for (auto c : coins) {
                if (i-c>=0) {
                    if (dp[i-c][0]==-1) continue;
                    if (dp[i][0]==-1) dp[i][0]=dp[i-c][0]+1;
                    else dp[i][0]=min(dp[i][0],dp[i-c][0]+1);
                }
            }
        }
        return dp[amount][0];
    }
};
