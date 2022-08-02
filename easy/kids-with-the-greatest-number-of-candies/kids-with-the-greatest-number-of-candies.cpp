class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> res;
        int mx=0;
        for (int i=0; i<size(candies); ++i)
            mx=max(mx,candies[i]);
        for (int i=0; i<size(candies); ++i) {
            if (candies[i]+extraCandies>=mx) res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};
