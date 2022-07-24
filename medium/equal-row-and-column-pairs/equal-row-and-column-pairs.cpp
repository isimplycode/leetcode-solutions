class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        unordered_map<string,int> s;
        string temp;
        for (int i=0; i<size(grid); ++i) {
            temp="";
            for (int j=0; j<size(grid[0]); ++j) {
                temp+=to_string(grid[i][j])+" ";
            }
            if(s.find(temp)!=s.end())
                s[temp]++;
            else
                s[temp]=1;
        }
        int ans=0;
        for (int i=0; i<size(grid[0]); ++i) {
            temp="";
            for (int j=0; j<size(grid); ++j) {
                temp+=to_string(grid[j][i])+" ";
            }
            if (s.find(temp)!=s.end()) {
                ans+=s[temp];
            }
        }
        return ans;
    }
};
