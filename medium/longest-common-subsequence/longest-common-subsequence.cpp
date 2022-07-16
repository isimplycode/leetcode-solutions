class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[size(text1)][size(text2)];
        for (int i=0; i<size(text1); ++i) {
            for (int j=0; j<size(text2); ++j) {
                dp[i][j]=0;
            }
        }
        for (int i=0; i<size(text1); i++) {
            if (text1[i]==text2[0]) {
                dp[i][0]=1;
            } 
            if (i>0) {
                dp[i][0]=max(dp[i][0],dp[i-1][0]);
            }
        }
        for (int i=0; i<size(text2); ++i) {
            if (text1[0]==text2[i]) {
                dp[0][i]=1;
            }
            if (i>0) {
                dp[0][i]=max(dp[0][i],dp[0][i-1]);
            }
        }
        for (int i=1; i<size(text1); ++i) {
            for (int j=1; j<size(text2); ++j) {
                if (text1[i]==text2[j]) {
                    dp[i][j]=dp[i-1][j-1]+1;
                } else {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[size(text1)-1][size(text2)-1];
    }
};
