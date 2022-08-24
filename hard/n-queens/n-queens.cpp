class Solution {
public:
    set<int> vert,diagl,diagr;
    void solve(int n,vector<vector<string>> &res,vector<string> &temp) {
        string t="";
        for (int i=0; i<n; ++i) {
            t+='.';
        }
        if (size(temp)==n) {
            res.push_back(temp);
            return;
        }
        for (int i=0; i<n; ++i) {
            if (vert.find(i)!=vert.end()||diagl.find(size(temp)-i)!=diagl.end()||diagr.find(size(temp)+i)!=diagr.end())
                    continue;
            vert.insert(i);
            diagl.insert(size(temp)-i);
            diagr.insert(size(temp)+i);
            t[i]='Q';
            temp.push_back(t);
            solve(n,res,temp);
            temp.pop_back();
            t[i]='.';
            vert.erase(i);
            diagl.erase(size(temp)-i);
            diagr.erase(size(temp)+i);
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> temp;
        vector<vector<string>> res;
        solve(n,res,temp);
        return res;
    }
};
