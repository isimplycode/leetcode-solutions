class Solution {
public:
    vector<pair<int,int>> vals;
    int vis[200][200];
    bool sur=true;
    void dfs(int i,int j,vector<vector<char>> &board) {
        if (vis[i][j]) return;
        vis[i][j]=true;
        if (i==0||j==0||i==size(board)-1||j==size(board[0])-1) {
            sur=false;
        }
        vals.push_back({i,j});
        if (i>0)
            if (board[i-1][j]=='O') {
                dfs(i-1,j,board);
            }
        if (j>0)
            if (board[i][j-1]=='O') {
                dfs(i,j-1,board);
            }
        if (j<size(board[0])-1)
            if (board[i][j+1]=='O') {
                dfs(i,j+1,board);
            }
        if (i<size(board)-1)
            if (board[i+1][j]=='O') {
                dfs(i+1,j,board);
            }
        
    }
    void solve(vector<vector<char>> &board) {
        for (int i=0; i<200; ++i) {
            for (int j=0; j<200; ++j) {
                vis[i][j]=0;
            }
        }
        for (int i=0; i<size(board); ++i) {
            for (int j=0; j<size(board[0]); ++j) {
                if (board[i][j]=='O'&&!vis[i][j]) {
                    vals.clear();
                    sur=true;
                    dfs(i,j,board);
                    if (sur) {
                        for (int k=0; k<size(vals); ++k) {
                            board[vals[k].first][vals[k].second]='X';
                        }
                    }
                }
            }
        }
    }
};
