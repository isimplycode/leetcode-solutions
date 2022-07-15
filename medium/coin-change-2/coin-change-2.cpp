class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int dp[amount+1];
        dp[0]=1;
        for (int i=1; i<amount+1; ++i) {
            dp[i]=0;
        }
        for (auto c : coins) {
            for (int i=1; i<amount+1; ++i) {
                if (i-c>=0) {
                    dp[i]+=dp[i-c];
                }
            }
        }
        return dp[amount];
    }
};
