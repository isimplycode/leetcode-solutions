class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res=0;
        for (int i=0; i<size(sentences); ++i) {
            int temp=0;
            for (int j=0; j<size(sentences[i]); ++j) {
                if (sentences[i][j]==' ') temp++;
            }
            temp++;
            res=max(res,temp);
        }
        return res;
    }
};
