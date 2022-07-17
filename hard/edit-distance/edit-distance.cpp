class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=size(word1),m=size(word2);
        int dp[n+1][m+1];
        for (int i=0; i<=n; ++i) {
            for (int j=0; j<=m; ++j) {
                dp[i][j]=INT_MAX;
            }
        }
        dp[0][0]=0;
        for (int i=0; i<=n; ++i) {
            for (int j=0; j<=m; ++j) {
                if (i) dp[i][j]=dp[i-1][j]+1;
                if (j) dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
                if (i&&j) {
                    if (word1[i-1]==word2[j-1]) {
                        dp[i][j]=dp[i-1][j-1];
                    } else {
                        dp[i][j]=min(dp[i-1][j-1]+1,dp[i][j]);
                    }
                }
            }
        }
        return dp[n][m];
    }
};
